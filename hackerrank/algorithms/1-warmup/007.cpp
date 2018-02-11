#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,j,k,n;
    cin>>n;
    k=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(n-k);j++)
        {
            cout<<"#";
        }
        k--;
        cout<<endl;
    }
    return 0;
}

//https://www.hackerrank.com/challenges/staircase/problem