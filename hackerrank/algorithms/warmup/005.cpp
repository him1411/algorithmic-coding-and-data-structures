#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,i;
    long int a[1000],sum=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;
    
    return 0;
}

//https://www.hackerrank.com/challenges/a-very-big-sum/problem