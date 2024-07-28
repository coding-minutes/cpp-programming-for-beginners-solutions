#include<bits/stdc++.h>
using namespace std;

int power(int x, int y) {
    
    int ans = 1;
    for (int i = 1; i <= y; i++) {
        ans = ans * x;
    }
    return ans;
}