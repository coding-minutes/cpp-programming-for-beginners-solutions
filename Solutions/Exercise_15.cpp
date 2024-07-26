#include <iostream>
using namespace std;

int largest (int n, int arr[])
{
    int res = -1;
    for(int i=0; i<n; i++) res = max(res, arr[i]);
    return res;
}