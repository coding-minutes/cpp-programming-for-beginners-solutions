#include <iostream>
using namespace std;

void mainFn() {
    int n ; cin >> n ;
    int i, j, num = 1, gap;
    gap = n - 1;
 
    for ( j = 1 ; j <= n ; j++ )
    {
        num = j;
        for ( i = 1 ; i <= gap ; i++ )
            cout << " ";
 
        gap --;
        for ( i = 1 ; i <= j ; i++ )
        {
            cout << num;
            num++;
        }
        num--;
        num--;
        for ( i = 1 ; i < j ; i++)
        {
            cout << num;
            num--;
        }
        cout << "\n";
   
    }
}