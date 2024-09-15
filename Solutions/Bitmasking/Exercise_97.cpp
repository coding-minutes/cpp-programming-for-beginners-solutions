#include<bits/stdc++.h>
using namespace std;

int countSetBit(int n) {
    int count = 0;
    for (int i = 0; i <= 30; i++) {
        if (n & (1 << i)) {
            count++;
        }
    }
    return count;
}
