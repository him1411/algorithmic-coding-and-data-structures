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

vector<int> adj[21000];
int g[21000];

bool dfs(int r)
{
	bool res =true;
	for (int i = 0; i < adj[r].size(); ++i)
	{
		int v = adj[r][i];
		if (g[v] == g[r])
			return false;
		if (g[v]==0)
		{
			g[v] = -g[r];
			res = res and dfs(v);
		}
	}
	return res;
}

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    for (int j = 1; j <= t; ++j)
   	{
    	int n,m;
    	cin>>n>>m;
    	for (int i = 0; i < n; ++i)
    	{
    		g[i] =0;
    		adj[i].clear();
    	}
    	int x,y;
    	for (int i = 0; i < m; ++i)
    	{
    		cin>>x>>y;
    		adj[x].push_back(y);
    		adj[y].push_back(x);    	
    	}
    	cout<<"Scenario #"<<j<<":"<<endl;
    	bool result =true;
    	for (int i = 0; i < n; ++i)
    	{
    		if (g[i]==0)
    		{
    			g[i]=1;
    			result = result and dfs(i);
    		}
    	}
    	if (result)
    		cout<<"No suspicious bugs found!"<<endl;
    	else
    		cout<<"Suspicious bugs found!"<<endl;
    }
    return 0;
}