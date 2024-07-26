#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int n) {
    if ( n == 0) {
        return 0;
    }
    else {
        return n % 10 + sumOfDigit(n/10);
    }
}