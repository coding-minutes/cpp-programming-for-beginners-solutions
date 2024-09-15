#include<bits/stdc++.h>
using namespace std;

int isPowerOfTwo(int n) {

    if (!(n & (n-1))) {
        return 1;
    }
    else {
        return 0;
    }
}