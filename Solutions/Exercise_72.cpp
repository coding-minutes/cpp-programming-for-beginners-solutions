#include<bits/stdc++.h>
using namespace std ;

bool isMirror(int matrix1[][50],int matrix2[][50],int N) {
    int row = 0;
    int col = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1; j >= 0; j--)
        {
            if (matrix2[row][col] != matrix1[i][j]) return false;
            col++;
        }
        col = 0;
        row++;
    }
    return true;
}