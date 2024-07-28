#include<bits/stdc++.h>
using namespace std ;

void moveNegativesToEnd(int* arr,int n)
{
    int temp[n] ;
    int j = 0;
        
    for (int i = 0; i < n; i++)
        if (arr[i] >= 0)
            temp[j++] = arr[i];
            
    if (j == n || j == 0)
        return;
        
    for (int i = 0; i < n; i++)
        if (arr[i] < 0)
            temp[j++] = arr[i];
            
    for (int i = 0; i < n; i++) 
        arr[i] = temp[i];
}