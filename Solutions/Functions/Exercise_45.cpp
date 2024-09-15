#include<bits/stdc++.h>
using namespace std;

int noOfTrailingZeroesInFactorial(int n)
{
    int trailingZeroes = 0;
    while (n > 0) {
        n /= 5;
        trailingZeroes += n;
    }
    return trailingZeroes;
}
