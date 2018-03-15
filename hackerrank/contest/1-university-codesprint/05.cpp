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

struct point
{
	int start;
	int end;
};

int32_t main()
{
    IOS;
    ll n;
    cin>>n;
    int a[n+1],b[n+1];
    for (int i = 1; i <= n; ++i)
    {cin>>a[i];}
    for (int i = 1; i <= n; ++i)
    {
    	if ( (a[i] == a[i-1]) || (a[i]==a[i+1]) ) 
    		b[i] =1;
    	else
    		b[i]=0;
    }
    ll m;
    cin>>m;
    point v[m];
    for (int i = 0; i < m; ++i)
    {
    	ll count =0;
    	cin>>v[i].start>>v[i].end;
    	for (int j = v[i].start; j <=v[i].end; ++j)
    	{
    		if (b[j]==0)
    		{
    			count++;
    		}
    	}
    	cout<<count<<endl;
    }

    return 0;
}