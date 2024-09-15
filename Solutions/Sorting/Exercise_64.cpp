#include<bits/stdc++.h>
using namespace std;

int binarySearch(int* arr,int n, int target, bool leftmost) {
    int lo = 0;
    int hi = n - 1;
    int idx = -1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2; 

        if (target > arr[mid]) {
            lo = mid + 1;
        } else if (target < arr[mid]) {
            hi = mid - 1;
        } else {
            idx = mid;
            if (leftmost) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
    }
    return idx;
}

int getCount(int *nums,int n,int tar) {
    int left = binarySearch(nums,n, tar, true);
    if (left < 0) return 0;
    int right = binarySearch(nums,n, tar, false);
    return right - left + 1;
}