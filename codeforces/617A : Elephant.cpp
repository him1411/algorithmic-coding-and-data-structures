#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define int long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    int n,sum =0;
    cin>>n;
    sum = n/5;
    n = n%5;
    sum = sum + n/4;
    n=n%4;
    sum = sum + n/3;
    n=n%3;
    sum = sum + n/2;
    n=n%2;
    sum = sum + n/1;
    n=n%1;

    cout<<sum;
    return 0;
}