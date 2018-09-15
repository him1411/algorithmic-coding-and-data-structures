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
#define mod 1000000007;

vector<int> v[200010];
bool vis[200010];
int size = 0;

void dfs(int n)
{
	vis[n] = true;
	size++;
	for (int i = 0; i < v[n].size(); ++i)
	{
		if (!vis[v[n][i]])
			dfs(v[n][i]);
	}
	return;
}

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
    	int n,m,num=1,ans=0,a,b;
    	cin>>n>>m;
    	memset(vis,0,sizeof(vis));
    	for (int i = 0; i < n; ++i)
    	{
    		v[i].clear();
    	}
    	
    	for (int i = 0; i < m; ++i)
    	{
    		cin>>a>>b;
    		a--;b--;
    		v[a].push_back(b);
    		v[b].push_back(a);
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		if (! vis[i])
    		{
    			size =0;
    			ans++;
    			dfs(i);
    			num = num*size;
    			num = num % mod;
    		}    		
    	}
    	cout<<ans<<" "<<num<<endl;
	}
	return 0;
}