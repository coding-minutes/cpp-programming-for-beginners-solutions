#include<bits/stdc++.h>
using namespace std;

int getNumberOfWords(string sentence)
{
    int count=0;  
      
    // char ch[]= new char[sentence.length()];     
    int n = sentence.size() ;    
    char ch[n] ;
    for(int i=0; i<n; i++)  
    {  
        ch[i] = sentence[i]  ;
        if( ((i>0)&&(ch[i]!=' ')&&(ch[i-1]==' ')) || ((ch[0]!=' ')&&(i==0)) )  
            count++;  
    }  
    return count;  
}