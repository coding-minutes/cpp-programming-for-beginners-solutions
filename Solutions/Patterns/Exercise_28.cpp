#include <iostream>
using namespace std;

void mainFn() {
    int n ; cin >> n ;
    int st=1;
    int sp=n-1 ;
    for(int i=1;i<=n;i++) {
        
        for(int j=1;j<=sp;j++) {
            cout << " "  ;
        }
        
        for(int j=1;j<=st;j++) {
            cout << "*"  ;
        }
        
        cout << "\n" ;
        
        sp-- ;
        st+=2 ;
    }
}