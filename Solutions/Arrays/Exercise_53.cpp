#include<bits/stdc++.h>
using namespace std ;

bool threeSum(int* arr, int n) {
    bool found = false;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    cout << arr[i] << " " << arr[j] << " "
                         << arr[k] << endl;
                    found = true;
                }
            }
        }
    }
    return found ;
}