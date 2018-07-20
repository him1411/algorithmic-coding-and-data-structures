#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define int long long
#define float long double
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int a[n],mx=1,level=1;
    cin>>a[0];
    for (int i = 1; i < n; ++i)
    {
    	cin>>a[i];
    	if (a[i]>=a[i-1])
    	{
    		level++;
    		if (level>mx)
    		{
    			mx = level;
    		}
    	}
    	else
    		level = 1;
    }
    cout<<mx;
    return 0;
}