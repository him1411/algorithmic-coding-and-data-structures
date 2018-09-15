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
    int n,temp,ans=0;
    vector<int> a,auth,tran,both;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	a.push_back(temp);
    }
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	if (temp==1)
    	{
    		auth.push_back(a[i]);
    	}
    	else if (temp==2)
    	{
    		tran.push_back(a[i]);
    	}
    	else if (temp == 3)
    	{
    		both.push_back(a[i]);
    	}
    }
    if (auth.size() != 0 && auth.size() != 0)
    {
    	sort(auth.begin(), auth.end());
    	sort(tran.begin(), tran.end());
    }
    if (both.size() != 0 )
    	sort(both.begin(), both.end());

    if (auth.size() != 0 && tran.size() != 0 && both.size() != 0 )
    {
    	if (auth[0]+tran[0] < both[0])
	    	ans = auth[0]+tran[0];
	    else
	    	ans = both[0];	
    }
    else if (auth.size() == 0 || tran.size() == 0)
    	ans = both[0];
    else if (both.size()==0)
    	ans = auth[0]+tran[0];	

    cout<<ans;
    return 0;
}