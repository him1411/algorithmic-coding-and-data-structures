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
    int n,m,cost=0;
    cin>>n>>m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    }
    for (int i = 0; i < m; ++i)
    {
    	int temp1,temp2;
    	cin>>temp1>>temp2;
    	cost = cost + min( v[temp1-1],v[temp2-1] );
    }
    cout<<cost;
    return 0;
}