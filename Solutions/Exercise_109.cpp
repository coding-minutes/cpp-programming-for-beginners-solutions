#include<bits/stdc++.h>
using namespace std;

int rev(int n, int temp)
{
    if (n == 0)
        return temp;
        
    temp = (temp * 10) + (n % 10);
    return rev(n / 10, temp);
}


int isPalindrome(int n)
{
    int reversedNum = rev(n, 0);
    if (reversedNum == n) return 1;
    return 0;
}