#include<bits/stdc++.h>
using namespace std;

int search(int *nums,int n,int target) {

    int start = 0, end = n- 1;
    
    while (start <= end) {
        int mid = start + ((end - start)>>1);
        
        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    
    return -1;
}