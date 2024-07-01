#include<bits/stdc++.h>
using namespace std;

int isSorted(char C[], int size) {
    
    int ans = 1;
    for (int i = 0; i < size-1; i++) {
        if (C[i] > C[i+1]) {
             ans = 0;
        }
    }
    
    return ans;
}