#include <iostream>
using namespace std;

void mainFn() {
    
    int a,b,c,d,e ; cin >> a >> b >> c >> d >> e ;
    float marks= (a+b+c+d+e)/5 ;
    
    if (marks>=90) cout << "A+" ;
    else if (marks>=80 && marks<90) cout << "A" ;
    else if (marks>=70 && marks<80) cout << "B" ;
    else if (marks>=60 && marks<70) cout << "C" ;
    else cout << "D" ;
}