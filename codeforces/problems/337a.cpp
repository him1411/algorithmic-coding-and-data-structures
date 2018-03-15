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
    int k,n;
    cin>>k>>n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    }
    sort(v.begin(), v.end());
    int min = INT_MAX;
    for (int i = 0; i <= n-k; ++i)
    {
    	//trace3(min,v[i+k-1],v[i]);
    	if (v[i+k-1]-v[i] < min)
    	{
    		min = v[i+k-1] - v[i];
    	}
    }
    cout<<min;
    return 0;
}