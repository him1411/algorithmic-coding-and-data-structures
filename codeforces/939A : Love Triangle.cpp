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
    int n,b,c,d,count=0;
    cin>>n;
    int a[n+1];
    for (int i = 1; i <= n; ++i)
    {
    	cin>>a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
    	b =a[i];
    	c = a[b];
    	d = a[c];
    	if (d==i )
    	{
    		cout<<"YES";
    		return 0;
    	}
    }
    cout<<"NO";
    return 0;
}