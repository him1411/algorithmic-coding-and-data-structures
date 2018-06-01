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
    int a[n],b[n];
    for (int i = 1; i <= n; ++i)
    {
    	cin>>a[i];
    	b[i]=a[i];
    }
    sort(b+1,b+n+1);
    int r=1,l=n;
    for (int i = 1; i <=n; ++i)
    {
    	if (a[i] != b[i])
    	{
    		l = min(l,i);
    		r=i;
    	}
    }
    if(l>r)
    	r=l;

    reverse(a+l,a+r+1);
    for (int i = 1; i <=n; ++i)
    {
    	if (a[i]!=b[i])
    	{
    		cout<<"no";
    		return 0;
    	}
    }
    cout<<"yes"<<endl;
    cout<<l<<" "<<r;
    return 0;
}



