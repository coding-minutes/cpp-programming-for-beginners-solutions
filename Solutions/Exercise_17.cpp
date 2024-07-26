#include <iostream>
using namespace std;

void mainFn() {
    int n; 
    cin >> n;

    int sum = 0;

    while (n != 0) {
        int r=n%10 ;
        if(r%2!=0) sum= sum + r;
        n = n / 10;
    }
    cout<< sum;
}