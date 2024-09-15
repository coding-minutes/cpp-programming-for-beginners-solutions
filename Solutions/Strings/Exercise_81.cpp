#include<bits/stdc++.h>
using namespace std ;

void upperToLower(string s)
{
    int size = s.length();
    for (int i = 0; i < size; ++i)
    {
        cout << (char)(tolower(s[i]));
    }
}