#include<bits/stdc++.h>
using namespace std;

pair<int, int> largestAndSmallest(int A[], int sizeOfArray) {
    int minElement = INT_MAX;
    int maxElement = INT_MIN;
    
    for (int i = 0; i < sizeOfArray; i++) {
        int element = A[i];
        minElement = min(minElement, element);
        maxElement = max(maxElement, element);
    }
    
    return make_pair(maxElement, minElement);
}