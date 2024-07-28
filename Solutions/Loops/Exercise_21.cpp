#include <iostream>
using namespace std;

void mainFn() {
    int n ; cin >> n;
    int sum=0,temp=n ;
    
    while(n>0) {
        int r=n%10;    
        sum=sum+(r*r*r);    
        n=n/10;    
    } 
    
    if(temp==sum)    
    cout << 1 ; 
    else    
    cout << 0;  
}