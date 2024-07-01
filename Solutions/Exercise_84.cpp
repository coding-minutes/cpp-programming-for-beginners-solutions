#include<bits/stdc++.h>
using namespace std;

int canBeFormedOrNot(string s1, string s2) {
    int freq1[26] = {0};
    int freq2[26] = {0};
    
    for (int i = 0; i < int(s1.size()); i++) {
        freq1[int(s1[i]-'a')]++;
    }
    for (int i = 0; i < int(s2.size()); i++) {
        freq2[int(s2[i]-'a')]++;
    }
    
    for (int j = 0; j < 26; j++) {
         if (freq2[j] > freq1[j]) {
              return 0;
         }
    }
    
    return 1;
}