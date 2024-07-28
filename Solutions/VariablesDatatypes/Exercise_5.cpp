#include <iostream>
#include <iomanip>
using namespace std;

void mainFn() {
    float a,b,c,d,e;
    cin >>a >> b >> c >> d >> e ;
    float t=a+b+c+d+e ;
    float ans=t/5;
    cout << fixed << setprecision(2) << ans ; 
}