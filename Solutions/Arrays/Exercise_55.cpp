#include<bits/stdc++.h>
using namespace std;

int findMissingNumber(int A[], int sizeOfArray) {
    int n = sizeOfArray;
    
    int sum = 0;
    
    for (int i = 0; i < sizeOfArray; i++) {
        sum += A[i];
    }
    
    int missingNumber = (n+1)*(n+2)/2 - sum;
    
    return missingNumber;
}