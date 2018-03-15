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
    int a,b,c,n;
    cin>>n>>a>>b>>c;
    int ans = 0;
    for (int i = 0; i*a <= n; ++i)
    {
    	for (int j = 0; j*b <=n ; ++j)
    	{
    		int k = (n - i*a - j*b)/c;
    		if (k>=0 && (n - i*a - j*b)%c==0)
    		{
    			ans  = max(ans,i+j+k);
    		}
    	}
    }
    cout<<ans;
    return 0;
}