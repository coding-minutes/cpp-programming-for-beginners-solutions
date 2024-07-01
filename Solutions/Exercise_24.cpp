#include<bits/stdc++.h>
using namespace std ;

int isPrime(int num)
{
    for (int i = 2; i*i <= num; ++i)
    {
        if (num%i == 0) return 0;
    }
    return 1;
}
void printPrimes(int N) {
    for (int i = 2; i <= N; ++i)
    {
        if (isPrime(i) == 1) cout << i << " ";
    }
}