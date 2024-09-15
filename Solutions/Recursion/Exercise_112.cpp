#include<bits/stdc++.h>
using namespace std ;

int getFrequencyUtility(int *arr, int n, int target, int index)
{
    if (index == n) return 0;
    
    int freq = 0;
    if (arr[index] == target) ++freq;
    
    freq += getFrequencyUtility(arr, n, target, index+1);
    return freq;
}

int getFrequency(int* arr, int n, int target)
{
    return getFrequencyUtility(arr,n, target, 0);
}