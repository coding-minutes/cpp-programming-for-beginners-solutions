#include<bits/stdc++.h>
using namespace std ;

void sortList(vector<string> list){
    if (list.size() == 0) return;
    
    sort(list.begin(),list.end());
    for (auto element : list)
        cout << element <<  " ";
}