#include<bits/stdc++.h>
using namespace std ;

int romanToInt(string s) {
        int sol = 0, num = 0;
        for (int k = s.length()-1; k>=0; k--) {
            switch(s[k]) {
                case 'I': num = 1; break;
                case 'V': num = 5; break;
                case 'X': num = 10; break;
                case 'L': num = 50; break;
                case 'C': num = 100; break;
                case 'D': num = 500; break;
                case 'M': num = 1000; break;
            }
            if (4 * num < sol) sol -= num;
            else sol += num;
        }
    return sol;
}