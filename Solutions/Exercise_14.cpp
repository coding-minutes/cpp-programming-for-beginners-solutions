#include <iostream>
using namespace std;

void mainFn() {
    
    int a ; cin >> a;
    char c ; cin >> c;
    int b ; cin >> b;
    
    int res=0;
    
    switch(c){
        case '+':
            res=a+b;
            break;
        case '-':
            res=a-b;
            break;
        case '*':
            res=a*b;
            break;
        case '/':
            res=a/b;
            break;
        default:
            break;
    }
    
    cout << res ;
}