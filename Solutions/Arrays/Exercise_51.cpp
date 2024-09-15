#include<bits/stdc++.h>
using namespace std ;
  
int getFrequency(int* arr,int n,  int target)
{
        int f = 0;
        
    for (int i=0;i<n;i++){
        if (arr[i] == target) ++f;
    }
    
    return f;
}