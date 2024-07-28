#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    
    int F[n+1];
    F[0] = 1;
    
    for (int i = 1; i <=n ; i++) {
        F[i] = F[i-1]*i;
    }
    return F[n];
}