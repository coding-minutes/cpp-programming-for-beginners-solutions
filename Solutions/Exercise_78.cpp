#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateTheMatrix(vector<vector<int>> matrix) {
     
    vector<vector<int>> v (matrix.size(), vector<int>(matrix[0].size(), 0));
    
    for (int i = matrix.size()-1; i >= 0; i--) {
        for (int j = 0; j < matrix[i].size(); j++) {
            v[j][(matrix.size()-1-i)] = matrix[i][j];
        }
    }
    return v;
}