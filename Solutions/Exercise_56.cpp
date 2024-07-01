#include<bits/stdc++.h>
using namespace std;

int elementPresentOrNot(vector<int> array, int element) {
    int low = 0, high = array.size() - 1;
    
    while (low <= high) {
        int mid = ( low + high ) / 2;
        if (array[mid] > element) {
            high = mid-1;
            continue;
        }
        if (array[mid] < element) {
            low = mid +1;
            continue;
        }
        return 1;
    }
    return 0;
}