#include<bits/stdc++.h>
using namespace std ;

void swap(vector<int> &nums, int to, int from)
{
    int temp = nums[to];
    nums[to] = nums[from];
    nums[from] = temp;
}

void sort012(vector<int> &nums) {
    int lo = 0;
    int hi = nums.size() - 1;
    int mid = 0;
    while (mid <= hi) {
        switch (nums[mid]) {
        case 0: {
            swap(nums, lo, mid);
            lo++;
            mid++;
            break;
        }
        case 1:
            mid++;
            break;
        case 2: {
            swap(nums, hi, mid);
            hi--;
            break;
        }
        }
    }
}