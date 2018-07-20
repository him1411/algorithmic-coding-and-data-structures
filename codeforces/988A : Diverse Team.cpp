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
    int n,t,temp;
    cin>>n>>t;
    vector<int> v,ans;

   	cin>>temp;
	v.push_back(temp);
	ans.push_back(1);

    for (int i = 1; i < n; ++i)
    {
    	cin>>temp;
    	if( !(find(v.begin(), v.end(), temp) != v.end()) )
    	{
    		v.push_back(temp);
    		ans.push_back(i+1);

    		//trace2(v[i],ans[i]);
    	}
    }
    if (ans.size()<t)
    {
    	cout<<"NO";
    	return 0;
    }
    cout<<"YES"<<endl;
    for (int i = 0; i <t ; ++i)
    {
    	cout<<ans[i]<<" ";
    }
}
