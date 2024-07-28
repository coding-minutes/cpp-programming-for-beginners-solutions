#include<bits/stdc++.h>
using namespace std;

double getArea(string shape, double dimension1, double dimension2)
{
    if(shape=="Square") {
        return dimension1*dimension1;
    }
    
        if(shape=="Rectangle"){
        return dimension1*dimension2;
    }
    
        if(shape=="Circle") {
        return 3.14*dimension1*dimension1;
    }

        return 0.5*dimension1*dimension2;  
}