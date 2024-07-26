#include <iostream>
using namespace std;

void mainFn() {
    int n ; cin >> n ;
    for(int i=1;i<=n;i++) {
        int temp=i ;
        
        for(int j=1;j<=i;j++) {
            cout <<  temp%2 ;
            temp++ ;
        }
        
        cout << "\n" ;
        
    }   
}