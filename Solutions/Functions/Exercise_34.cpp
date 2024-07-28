#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(string binaryInteger) {
    int decimalInteger = 0;
    
    int size = binaryInteger.size();
    
    for (int i = 0; i < size; i++) {
         if (binaryInteger[i] == '1') {
             decimalInteger += (1 << (size - i - 1));
         }
    }
    
    return decimalInteger;
}