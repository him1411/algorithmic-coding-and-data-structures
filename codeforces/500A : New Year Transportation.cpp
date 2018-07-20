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
    int n,t,index=1;
    bool ans =false;
    cin>>n>>t;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    while(index<=t)
    {
    	if (index==t)
    	{
    		ans=true;
    	}
    	index = index + a[index-1];
    }
    if (ans ==true)
    {
    	cout<<"YES";
    }
    else
    	cout<<"NO";

    return 0;
}

