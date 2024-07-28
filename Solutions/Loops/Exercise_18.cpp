#include <iostream>
#include<string>
using namespace std;

void mainFn() {
    int n ; cin >> n;
    int sumOdd = 0; 
 
    string num = to_string(n);
 
    for(int i = 0; i < num.size(); i++)
    {
        if (i % 2 == 0)
            sumOdd = sumOdd + (int(num[i]) - 48);
    }
    cout << sumOdd;
}