#include<bits/stdc++.h>
using namespace std;

char largestFrequencyCharacter(char C[], int size) {
    
    char ans = '#';
    int freq = 0;
    for (int i = 0; i < 26; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (char(C[j]-'a') == i) {
                count++;
            }
        }
        if (count > freq) {
            ans = char('a' + i);
            freq = count;
        }
    }
    return ans;
}