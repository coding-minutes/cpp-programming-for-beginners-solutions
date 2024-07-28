#include <iostream>
using namespace std;

void mainFn() {
    int n ; cin >> n;
    int a = 0, b = 1, c, i;

    if( n == 0){
        cout << a ;
        return ;
    }

    for(i = 2; i <= n; i++){
       c = a + b;
       a = b;
       b = c;
    }
    cout << b; 
}