#include<bits/stdc++.h>
using namespace std ;

void column_sum(vector<vector<int>>matrix, int n)
{
    int i, j, sum = 0;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            sum = sum + matrix[j][i];
        }
        cout << sum << " " ;
        sum = 0;
    }
}
    

void row_sum(vector<vector<int>> matrix, int n)
{
    int i, j, sum = 0;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            sum = sum + matrix[i][j];
        }
        cout << sum << " " ;
        sum = 0;
    }
}

void printRowColSum(vector<vector<int>> matrix) {
    int n = matrix.size();
    if (n == 0) return;
    row_sum(matrix, n);
    cout << "\n" ;
    column_sum(matrix, n);
}