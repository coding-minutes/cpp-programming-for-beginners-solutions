#include <iostream>
using namespace std;

void mainFn() {
    
    int units; 
    cin >> units;
    int ans=0;
    
    if (units <= 50)
    {
        ans=units * 20;
    }
    else if (units <= 100)
    {
        ans= (50 * 20) +
               (units - 50) * 30;
    }
    else if (units <= 150)
    {
        ans=(50* 20) +
               (50 * 30) +
               (units - 100) * 40;
    }
    else if (units > 150)
    {
        ans= (50 * 20) +
               (50 * 30) +
               (50 * 40) +
               (units - 150) * 50;
    }
    
    cout << ans;
}