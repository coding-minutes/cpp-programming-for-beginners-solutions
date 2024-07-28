#include<bits/stdc++.h>
using namespace std;

int getProduct(int a,int b)
{
    int sum = 0;
    
    for (int i = 1; i <= a; i++)  
    {
        sum += b;
    }
    return sum;
}