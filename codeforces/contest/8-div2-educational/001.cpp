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
	int t,n, k,dis1,dis2,now;
    cin>>t;
    for (int j = 0; j < t; ++j)
    {	
    	cin>>n>>k;
    	int a[n];
    	int ans=0;	
    	for(int i=1;i<=k;i++)
    	{
    		cin>>a[i];
    	}
    	ans=max(a[1], n-a[k]+1);
    	for(int i=1;i<=k-1;i++)
    	{
    		dis1=a[i];
    		dis2=a[i+1];
    		now=(dis2-dis1)/2 + 1;
    		ans=max(ans, now);
    	}
    	cout<<ans<<endl;
    }
    return 0;
}