#include<bits/stdc++.h>
using namespace std;
int lposn(int n,int m,int k)
{
    //n -> the size of the circle
    
    //m ->total number of toys
    
    //k ->starting position
    
    int result=(k+m-1)%n;
    
    
    return result;
}
