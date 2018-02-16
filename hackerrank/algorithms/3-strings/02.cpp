#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    string str;
    cin>>str;
    int n =str.size();
    int count =1;
    for(int i=0;i<n;i++)
    {
        if(str[i]>= 'A'  && str[i] <= 'Z')
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
