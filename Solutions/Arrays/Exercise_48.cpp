#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int A[], int k, int sizeOfArray) {
    
    sort(A, A+sizeOfArray);
    
    return A[k-1];
}