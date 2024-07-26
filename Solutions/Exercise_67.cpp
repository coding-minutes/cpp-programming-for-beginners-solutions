#include<bits/stdc++.h>
using namespace std;

int numberOfZeros(vector<vector<int>> matrix) {
    
    if (matrix.size() == 0) {
        return 0;
    }
    
    int  rows = matrix.size();
    int columns = matrix[0].size();
    
    int count = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }
    return count;
}