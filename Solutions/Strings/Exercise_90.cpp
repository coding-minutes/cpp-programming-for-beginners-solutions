#include<bits/stdc++.h>
using namespace std;

bool isSubSequence(string a, string b) {
    int j = 0, m = a.length(), n = b.length();

    for (int i = 0; i < n && j < m; i++)
        if (a[j] == b[i])
            j++;
            
    return (j == m);
}