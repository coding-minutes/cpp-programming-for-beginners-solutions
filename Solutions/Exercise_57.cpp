#include<bits/stdc++.h>
using namespace std;

int frequencyOfLargestElement (vector<int> A) {
    
    int low = 0, high = A.size() - 1;
    
    int largestEle = A[high];
    
    int ans = 0;
    
    while (low <= high) {
        int mid = ( low + high ) / 2;
        if (A[mid] == largestEle) {
              ans = mid;
              high = mid-1;
        }
        else {
           low = mid+1;
        }
    }
    return (A.size() - ans);
}