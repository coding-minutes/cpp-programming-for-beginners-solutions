#include <iostream>
using namespace std;

void mainFn() {
    int n ; cin >> n ;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout << j ;
        }
        cout << "\n" ;
    }   
}