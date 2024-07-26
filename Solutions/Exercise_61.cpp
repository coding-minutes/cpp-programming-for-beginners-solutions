#include<bits/stdc++.h>
using namespace std;

vector<int> sortTheArray(vector<int> A) {
    int zero = 0;
    int two = 0;
    
    for (int i = 0; i < A.size(); i++) {
        if (A[i] == 0) zero++;
        if (A[i] == 2) two++;
    }
    int i,j;
    for (i = 0; i < A.size(); i++) {
         if (zero == 0) break;
         A[i] = 0;
         zero--;
    }
    
    for (j = A.size() - 1; j >= 0; j--) {
        if (two == 0) break;
        A[j] = 2;
        two--;
    }
    while (i <= j) {
        A[i] = 1;
        i++;
    }
    return A;
}