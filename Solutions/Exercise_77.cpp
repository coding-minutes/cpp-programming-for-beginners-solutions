#include<bits/stdc++.h>
using namespace std;

int countOfDifferentCharacters(char C[], int size) {
    unordered_map < char, int > freq;
    
    for (int i = 0; i < size; i++) {
        freq[C[i]]++;
    }
    
    return freq.size(); 
}