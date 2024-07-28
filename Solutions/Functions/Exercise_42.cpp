#include<bits/stdc++.h>
using namespace std;

int nCr (int n, int r) {
    
    int factorial[n+1];
    
    factorial[0] = 1;
    
    for (int i = 1; i <= n; i++) {
        factorial[i] = factorial[i-1] * i;
    }
    
    int answer = factorial[n] / (factorial[r] * factorial[n-r]);
    
    return answer;
}