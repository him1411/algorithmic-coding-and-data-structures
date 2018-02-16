#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    string s;
    cin>>s;
    //int n =str.size();
    //int t = n % 3;
    int count=0;
    for(int i=0;i<s.size();i=i+3)
    {
        if(s[i]!='S')
            count++;
        if(s[i+1]!='O')
            count++;
        if(s[i+2]!='S')
            count++;
    
    }
    cout<<count;
    return 0;
}
