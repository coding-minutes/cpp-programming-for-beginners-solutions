#include<bits/stdc++.h>
using namespace std;

int numberOfOne(vector<int> array) {
    
    int low = 0, high = array.size()-1;
    
    int ans = high+1;
    
    while (low <= high) {
          int mid = (low + high)/2;
          if (array[mid] == 1) {
              ans = mid;
              high = mid-1;
          }
          else {
              low = mid+1;
          }
    }
    
    return (array.size()) - ans;
}