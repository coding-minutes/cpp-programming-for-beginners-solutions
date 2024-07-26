#include<bits/stdc++.h>
using namespace std;

vector<int> printPrimes(int n) {
     if ( n == 1 ) {
        return {};
    }
    
    bool primes[n+1];
    
    for (int i = 0; i <= n; i++) {
        primes[i] = true;
    }
    primes[0] = false;
    primes[1] = false;
    primes[2] = true;
    
    for (int i = 2; i <= n; i++) {
        if (primes[i] && i * i <= n) {
           for (int j = 2*i; j <= n; j += i) {
             primes[j] = false;
           }
        }
    }
    
    vector<int> v;
    
    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            v.push_back(i);
        }
    }
    
    return v;
}