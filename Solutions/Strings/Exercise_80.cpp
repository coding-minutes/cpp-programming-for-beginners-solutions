#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string s) {
    
    int n = s.size();
    
    if ((n&1)) {
        string s1 = s.substr(0, n/2);
        string s2 = s.substr(n/2+1);
        reverse(s2.begin(), s2.end());   
        if (s1 == s2) {
            return 1;
        }
        
        return 0;
    }
    else {
        string s1 = s.substr(0, n/2);
        string s2 = s.substr(n/2);
        reverse(s2.begin(), s2.end());    
        if (s1 == s2) {
            return 1;
        }
        
        return 0;
    }
    
}