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
    int t;
    cin>>t;
    while(t--)
    {
    	int n,a,b,ca=0,cb=0,temp;
	    vector<int> v;
	    cin>>n>>a>>b;
	    for (int i = 0; i < n; ++i)
	    {
	    	cin>>temp;
	    	if (temp ==a)
	    	{
	    		ca++;
	    	}
	    	if (temp==b)
	    	{
	    		cb++;
	    	}
	    	v.push_back(temp);
	    }
	    float pa = (float)ca/(float)n;
	    float pb = (float)cb/(float)n;
	    cout<<pa*pb<<endl;
    }
    return 0;
}