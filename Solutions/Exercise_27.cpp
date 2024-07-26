#include <iostream>
using namespace std;

void mainFn() {
    int n ; cin >> n ;
    int temp=1 ;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout << temp++ ;
        }
        cout << "\n" ;
    }   
}