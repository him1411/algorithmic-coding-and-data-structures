#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    if (n%m==0)
    {
        cout<<"0";
        return 0;
    }

    ll div = n/m;

    ll rem = n%m;

    ll temp1 = ((div+1)*m - n)*a;
    ll temp2 = rem*b;

    if (temp1<=temp2)
    {
        cout<<temp1;
        return 0;
    }
    else
        cout<<temp2;

    return 0;
}