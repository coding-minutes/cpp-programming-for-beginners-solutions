#include<bits/stdc++.h>
using namespace std ;

void printSpiralMatrix(int a[][50],int m,int n) {
    // write your code here
    int i, k = 0, l = 0;
  
    while (k < m && l < n) {
        
        for (i = l; i < n; ++i) {
            cout << a[k][i] << " ";
        }
        k++;
  
        
        for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << " ";
        }
        n--;
  
     
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }
  
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
}