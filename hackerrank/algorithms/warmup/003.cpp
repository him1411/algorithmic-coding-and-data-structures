#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a1,a2,a3,b1,b2,b3,a,b;
    a=0;
    b=0;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    if (a1 > b1 )
    {
        a++;
    }
     if (a2 > b2 )
    {
        a++;
    }
     if (a3 > b3 )
    {
        a++;
    }
    if (a1 < b1 )
    {
        b++;
    }
    if (a2 < b2 )
    {
        b++;
    }
    if (a3 < b3 )
    {
        b++;
    }
    cout<<a<<" "<<b;
    return 0;
}
//https://www.hackerrank.com/challenges/compare-the-triplets/problem