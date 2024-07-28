#include<bits/stdc++.h>
using namespace std;

int sumOfDiagonalElement(vector<vector<int>> A) {
    
    int r = A.size();
    int c = A[0].size();
    
    int sum = 0;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j) {
                sum += A[i][j];
            }
        }
    }
    return sum;
}