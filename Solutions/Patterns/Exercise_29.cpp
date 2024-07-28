#include <iostream>
using namespace std;

void mainFn() {
    int n ; cin >> n ;
    int st=1;
    int sp=n/2 ;
    for(int i=1;i<=n;i++) {
        
        for(int j=1;j<=sp;j++) {
            cout << " "  ;
        }
        
        for(int j=1;j<=st;j++) {
            cout << "*"  ;
        }
        
        cout << "\n" ;
        
        if(i<=n/2) {
            sp-- ;
            st+=2 ;  
        }
        else {
            sp++ ;
            st-=2 ;
        }
        
    }   
}