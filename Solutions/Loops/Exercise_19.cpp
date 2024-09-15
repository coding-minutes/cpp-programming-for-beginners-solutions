#include <iostream>
using namespace std;

void mainFn() {
    int n; 
    cin >> n;
    int c3=0,c5=0;
    
    for(int i=1;i<=n;i++){
        c3++ ; c5++ ;
        string d="" ;
        if(c3==3){
            c3=0 ;d+="Fizz" ;
        }
            if(c5==5){
            c5=0 ;d+="Buzz" ;
        }
        string a=to_string(i) ;
        if(d=="") cout << a << " " ;
        else cout << d << " " ;
    }
}