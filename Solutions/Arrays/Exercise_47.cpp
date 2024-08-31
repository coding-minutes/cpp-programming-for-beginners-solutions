#include <bits/stdc++.h>
using namespace std;

float calculateMedian(int A[], int sizeOfArray) {
    if (sizeOfArray % 2 == 1) {
        // For odd-sized array, return the middle element
        return A[sizeOfArray / 2];
    } else {
        // For even-sized array, return the average of the two middle elements
        int mid1 = sizeOfArray / 2 - 1;
        int mid2 = sizeOfArray / 2;
        return (A[mid1] + A[mid2]) / 2.0;
    }
}
