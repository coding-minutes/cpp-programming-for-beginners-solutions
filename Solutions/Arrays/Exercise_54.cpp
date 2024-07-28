#include<bits/stdc++.h>
using namespace std ;

void rotate(int* nums, int n, int k) {
    reverse(nums, nums + n - k);
    reverse(nums + n - k, nums + n);
    reverse(nums, nums + n);
}
    