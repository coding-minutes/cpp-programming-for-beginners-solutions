#include<bits/stdc++.h>
using namespace std;

int first(int *arr, int n,int x)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) 
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        high = mid - 1;
        else if (arr[mid] < x)
        low = mid + 1;
        else 
        {
        res = mid;
        high = mid - 1;
        }
    }
    return res;
}
    
int last(int *arr,int n,int x)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) 
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else 
            {
            res = mid;
            low = mid + 1;
            }
    }
    return res;
}

void firstAndLastOccurence(int *nums,int n,int tar) {
    cout << first(nums,n,tar) << " " << last(nums,n,tar);
}