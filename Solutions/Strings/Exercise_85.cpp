#include<bits/stdc++.h>
using namespace std;

int sumOfElement(vector<vector<int>> matrix) {
    
    int sum = 0;
    
    for (int i = 0; i < matrix.size(); i++) {
        int check = 0;
        for (int j = 0; j < matrix[i].size(); j++) {
            if (i == j) {
                check = 1;
            }
            if (check == 0) {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}