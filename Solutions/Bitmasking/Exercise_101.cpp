#include<bits/stdc++.h>
using namespace std;

int singleFrequencyElement(vector<int> A) {
    
    int xorValue = 0;
    
    for (auto element : A) {
        xorValue = xorValue ^ element;
    }
    
    return xorValue;
}