//https://www.hackerrank.com/challenges/crush/problem
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
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl

int32_t main()
{
    IOS;
    ll n,m,a,b,x,temp=0,max=0;
    vector<ll> v;
    cin>>n>>m;
    for (int i = 1; i <= n; ++i)
    {
    	v.push_back(0);
    }
    for (int i = 0; i < m; ++i)
    {
    	cin>>a>>b>>x;
    	v[a] = v[a] + x;
        if((b+1) <= n)
            v[b+1] = v[b+1] - x;
    }
    for (int i = 1; i <= n; ++i)
    {
    	temp = temp + v[i];
    	if (max<temp)
    	{
    		max = temp;
    	}
    }
    cout<<max;
    return 0;
}