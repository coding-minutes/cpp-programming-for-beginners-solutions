#include<bits/stdc++.h>
using namespace std;

int noOfTrailingZeroes(int num)
{
    if (num == 0) return 1;
    int trailingZeroesCount = 0;
    
    while (num > 0)
    {
        if (num%10 == 0)
        {
            ++trailingZeroesCount;
            num /= 10;
        } 
        else 
        {
            break;
        }
    }
    
    return trailingZeroesCount;
}
