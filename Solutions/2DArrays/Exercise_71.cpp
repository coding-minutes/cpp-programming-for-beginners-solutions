#include<bits/stdc++.h>
using namespace std ;
// const int M=3 ;
// const int N=4 ;

bool searchMatrix(int matrix[][50],int M,int N,int target) {
    int low = 0, high = (N*M)-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(matrix[mid/M][mid%M] == target)
            return true;
        else if(matrix[mid/M][mid%M] < target)
            low = mid+1;
        else
            high = mid-1;
    }
    return false;
}