#include <iostream>
using namespace std;

void mainFn() {
    int n ; cin >> n;
    if (n == 1) {
        cout << 0  ;
        return ;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            {
                cout << 0 ;
                return ;
            }
        }
    }
    cout << 1 ;
}