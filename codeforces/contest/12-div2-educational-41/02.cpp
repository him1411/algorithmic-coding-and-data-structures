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
    int n,k,temp;
    cin>>n>>k;
    vector<int> a(n,0),b(n,0);
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	a[i]=temp;
    }
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	b[i]=temp;
    }
    int sum =0,res=0;
    for (int i = 0; i < k; ++i)
    {
    	if (b[i]==0)
    	{
    		sum = sum + a[i];
    	}
    }
    res =sum;
    for (int i = k; i < n; ++i)
    {
    	if (b[i]==0)
    	{
    		sum = sum + a[i];
    	}
    	if (b[i-k]==0)
    	{
    		sum = sum - a[i-k];
    	}
    	res = max(res,sum);
    }
    //cout<<res<<endl;
    for (int i = 0; i < n; ++i)
    {
    	if (b[i]==1)
    	{
    		//trace2(res,a[i]);
    		res = res + a[i];
    	}
    }
    cout<<res;
    return 0;
}