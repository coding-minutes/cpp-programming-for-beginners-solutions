#include<bits/stdc++.h>
using namespace std;

char largestFrequencyCharacter(string s) {
     
    unordered_map< char, int> freq;
    
    for (int i = 0; i < int (s.size()); i++) {
        freq[s[i]]++;
    }
    
    int maxFreq = INT_MIN;
    char maxFreqChar = '#';
    
    for (auto i : freq) {
        if (i.second > maxFreq) {
            maxFreq = i.second;
            maxFreqChar = i.first;
        }
    }
    
    return maxFreqChar;
}