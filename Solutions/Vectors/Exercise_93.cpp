#include<bits/stdc++.h>
using namespace std ;

void mergeSortedLists(vector<int> &list1,vector<int> &list2)
{
    int index2=0 ;
    int size2=list2.size() ;
    int size1=list1.size() ;
        for (int index1 = 0; index2 < size2; index1++) {
        if (index1 == size1 || list1[index1] > list2[index2]) {
            list1.insert(list1.begin()+index1, list2[index2++]);
        }
    }
    for (int num : list1) cout << num << " ";
}