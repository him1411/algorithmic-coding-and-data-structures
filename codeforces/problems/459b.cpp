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
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int mx =a[0];
    int mn =a[0];
    for (int i = 1; i < n; ++i)
    {
    	cin>>a[i];
    	if (a[i]>mx)
    		mx = a[i];
    	if (a[i]<mn)
    		mn = a[i];
    }
    cout<<mx-mn<<" ";
    if(mn==mx)
    {
        cout<<(n*(n-1))/2;
        return 0;
    }

    int diff = mx-mn,mnc=0,mxc=0;
    for (int i = 0; i < n; ++i)
    {
    	if (a[i]==mn)
    	{
    		mnc++;
    	}
    	if (a[i]==mx)
    	{
    		mxc++;
    	}
    }
	cout<<mxc*mnc;
    return 0;
}