#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define ll long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    ll m,n,temp;
    cin>>n>>m;
    int b[m];
    for (int i = 0; i < m; ++i)
    {
    	b[i]=0;
    }
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	b[temp]++;
    }
    for (int i = 0; i < m; ++i)
    {
    	cout<<b[i]<<" ";
    }
    return 0;
}

