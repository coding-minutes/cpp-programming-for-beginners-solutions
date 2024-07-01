#include<bits/stdc++.h>
using namespace std;

int countOfOne(vector<int> A) {
    
    int l = 0, h = A.size() -1;
    
    int ans = -1;
    
    while (l <= h) {
        int mid = (l + h)/2;
        if (A[mid] == 1) {
            ans = mid;
            h = mid-1;
        }
        else {
            l = mid+1;
        }
    }
    
    if (ans == -1) {
        return 0;
    }
    else {
        return (int(A.size()) -  ans );
    }
}