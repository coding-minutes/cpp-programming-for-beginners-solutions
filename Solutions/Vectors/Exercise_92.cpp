#include<bits/stdc++.h>
using namespace std ;

void sortList(vector<int> &nums)
{
    // write your code here
    if (nums.size() == 0) return;
    
    sort(nums.begin(),nums.end()) ;
    for (int i : nums)
    cout << i << " ";
}