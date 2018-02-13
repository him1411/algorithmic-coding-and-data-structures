//https://www.hackerrank.com/challenges/array-left-rotation/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n,d;
    cin>>n>>d;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[(i + n - d) % n] = a[i];
    }
    for(int i =0; i<n ; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
