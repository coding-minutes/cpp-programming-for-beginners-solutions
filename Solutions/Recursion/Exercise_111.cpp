#include<bits/stdc++.h>
using namespace std;

int getLastOccurenceUtility(int* arr, int target, int index)
{
    if (arr[index] == target) return index;
    return getLastOccurenceUtility(arr, target, index-1);
}

int getLastOccurence(int* arr,int n, int target)
{
return getLastOccurenceUtility(arr, target, n-1);
}
