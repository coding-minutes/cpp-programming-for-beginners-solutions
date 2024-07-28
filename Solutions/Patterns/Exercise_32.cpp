#include <iostream>
using namespace std;

void mainFn() {
    
    int n ; cin >> n ;
    char ch;
   
    for(int i=1;i<=n;i++)
    {
        ch='A';
        
        for(int j=0;j<i;j++)
        {
            cout << ch++ ;
        }
        for(int j=0;j<i;j++)
        {
            cout << --ch ;
        }
            cout << endl ;
    }   
}