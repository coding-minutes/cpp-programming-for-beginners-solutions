#include <iostream>
using namespace std;

int sumOfEvenNumbers(int n, int m, int arr[1000][1000])
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!(arr[i][j]&1)) res += arr[i][j];
        }
    }
    return res;
}