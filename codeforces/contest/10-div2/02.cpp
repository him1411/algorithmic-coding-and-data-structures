#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define ll long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    ll n,m;
    cin>>n>>m;
    if (n==0)
    {
    	cout<<"1 0";
    	return 0;
    }
    ll arr[m];
    ll min, rem;
    cin>>arr[0];
    rem = n/arr[0];
    ll max = rem*arr[0];
    min =0;
    for (int i = 1; i < m; ++i)
    {
    	cin>>arr[i];
    	rem = n/arr[i];
    	if (max < rem*arr[i])
    	{
    		max = rem*arr[i];
    		min = i;
    	}
    }
    cout<<min+1<<" "<<max/arr[min];
 	return 0;
}