#include<bits/stdc++.h>
using namespace std;

char largestFrequencyCharacter (char c[], int size) {
    
    unordered_map < char, int > freq;
    
    for (int i = 0; i < size; i++) {
        freq[c[i]]++;
    }
    
    char cc;
    
    int maxFreq = 0;
    
    for (auto element : freq) {
        if (element.second > maxFreq) {
            maxFreq = element.second;
            cc = element.first;
        }
    }
    return cc;
}