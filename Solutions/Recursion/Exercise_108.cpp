#include<bits/stdc++.h>
using namespace std;

int getNoOfWaysToTile(int n)
{
    if (n <= 2) return n;
    return getNoOfWaysToTile(n - 1) + getNoOfWaysToTile(n - 2);
}
