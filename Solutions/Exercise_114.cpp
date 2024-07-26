#include<bits/stdc++.h>
using namespace std ;

int getNoOfBinaryStrings(int n)
{
    if (n <= 1) return n+1;
    return getNoOfBinaryStrings(n-1) + getNoOfBinaryStrings(n-2);
}