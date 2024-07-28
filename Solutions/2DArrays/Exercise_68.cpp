#include<bits/stdc++.h>
using namespace std;

int checkProductSign(vector<vector<int>> matrix) {
    
    int ans = 1;
    
    int row = matrix.size();
    int column = matrix[0].size();
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
             if (matrix[i][j] < 0) {
                 ans = ans * (-1);
             }
             if (matrix[i][j] == 0) {
                 ans  = 0;
             }
        }
    }
    
    return (ans >= 0);
}