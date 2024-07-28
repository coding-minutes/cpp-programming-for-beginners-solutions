#include<bits/stdc++.h>
using namespace std;

int fibonacciSeries(int n) {
    
    if ( n == 0 || n == 1 || n == 2) {
        return 1;
    }
    else {
        return fibonacciSeries(n-1) + fibonacciSeries(n-2) + fibonacciSeries(n-3);
    }   
}