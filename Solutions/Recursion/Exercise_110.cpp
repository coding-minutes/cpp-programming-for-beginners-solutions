#include<bits/stdc++.h>
using namespace std;

int getFirstOccurenceUtility(int* arr,  int target, int index)
{
    if (arr[index] == target) return index;
    return getFirstOccurenceUtility(arr, target, index+1);
}

int getFirstOccurence(int* arr, int target)
{
    return getFirstOccurenceUtility(arr, target, 0);
}