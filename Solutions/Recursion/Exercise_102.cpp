#include<bits/stdc++.h>
using namespace std;

void printIncDec(int N)
{
    if (N <= 0) 
    {
        cout << "\n" ;
        return;
    }
    cout << N << " " ;
    printIncDec(N-1);
    cout << N <<  " ";
}
