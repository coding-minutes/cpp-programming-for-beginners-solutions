#include<bits/stdc++.h>
using namespace std;

int divide(int X, int Y) {
    int quotient = 0;
    while (X >= Y) {
        X = X-Y;
        quotient++;
    }
    return quotient;
}