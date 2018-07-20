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
    int k2,k3,k5,k6,sum=0;
    cin>>k2>>k3>>k5>>k6;
    int mn = Min(k2,k5,k6);
    sum = mn*256;
    k2 = k2 -mn;
    k5 = k5 -mn;
    k6 = k6 -mn;
    int mn2 = min(k2,k3);
    sum = sum + mn2*32;
    cout<<sum;
}