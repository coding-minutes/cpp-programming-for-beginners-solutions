#include<bits/stdc++.h>
using namespace std ;

void twoSum(int* A, int size, int x) {
    
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] == x) {
                cout <<  "(" << i << "," << j << ")" << endl;
            }
        }
    }
    return; 
}