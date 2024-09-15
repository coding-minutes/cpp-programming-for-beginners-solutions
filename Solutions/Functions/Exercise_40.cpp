#include<bits/stdc++.h>
using namespace std;

int greatestCommonDivisor (int x, int y) {
    
    if (y == 0) {
        return x;
    }
    
    return greatestCommonDivisor (y, x % y);
}