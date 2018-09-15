#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long 
#define ll long long
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define INF 10000000000000007ll
#define MOD 1000000007ll
#define PI 3.14159265359
#define rev(A) reverse((A).begin(), (A).end())
#define sorv(A) sort((A).begin(), (A).end())

int32_t main()
{
    IOS;
    int n,m;
    while(cin>>n>>m && n>=0)
    {
    	int l =1,r=0,mid;
    	vector<int> a;
    	for (int i = 0; i < n; ++i)
    	{
    		int temp;
    		cin>>temp;
    		a.push_back(temp);
    		r = max(r,temp);
    	}
    	int ret =r;
    	while(l<=r)
    	{
    		mid = (l+r)/2;
    		int box =0;
    		for (int i = 0; i < n; ++i)
    		{
    			box += a[i]/mid + (a[i]%mid != 0);
    		}
    		if (box <= m)
    		{
    			r = mid-1;
    			ret = mid;
    		}
    		else
    			l = mid +1;
    	}
    	cout<<ret<<endl;
    }
    return 0;
}