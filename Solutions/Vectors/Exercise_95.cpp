#include<bits/stdc++.h>
using namespace std ;

void getMaximumInEachRow(vector<vector<int>> &nums)
{
    if (nums.size() == 0) return;
    
    for (auto list: nums)
    {
        int maxe = -(int)(1e9);
        for (auto i : list) maxe = max(maxe, i);
        cout << maxe << " " ;
    }
}