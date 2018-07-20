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
    int x,t,a,b,da,db;
    cin>>x>>t>>a>>b>>da>>db;
    int temp = a+b;
    if (x==0)
    {
    	cout<<"YES";
    	return 0;
    }
    for (int i = 0; i <t ; ++i)
    {
    	for (int j = 0; j < t; ++j)
    	{
    		if (x == (temp - (i*da + j*db))  )
    		{
    			cout<<"YES";
    			return 0;
    		}
    	}
    }
    for (int i = 0; i <t ; ++i)
    {
    	if ( x == (a-i*da)  )
    	{
    		cout<<"YES";
    		return 0;
    	}
    }
    for (int i = 0; i <t ; ++i)
    {
    	if ( x == (b-i*db) )
    	{
    		cout<<"YES";
    		return 0;
    	}
    }

    cout<<"NO";
    return 0;
}