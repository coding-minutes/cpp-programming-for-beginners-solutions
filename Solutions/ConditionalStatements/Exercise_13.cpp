#include <iostream>
using namespace std;

void mainFn() {
    int p,t,r; 
    cin >> p >> t;
    float si;
   
    if(t<3) {
        r=5;
    }
    else {
        r=6;
    }
   
    si= (float)(p*r*t)/100;
    cout << si;
}