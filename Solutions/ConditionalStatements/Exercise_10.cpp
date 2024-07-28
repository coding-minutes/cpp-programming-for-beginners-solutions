#include <iostream>
using namespace std;

void mainFn() {
    int x,y; 
    cin >> x >> y;
    
    float c = 0.9 * x;
    
    if(y>c) cout << "no";
    else cout << "yes";
}