#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    
    for(int i = 1; i < s.length();i++){
        if(s[i] == s[i-1]){
            s.erase(i-1,2);
            i= i-2 < 0 ? 0 : i - 2;
        }
    }
    return s;
}