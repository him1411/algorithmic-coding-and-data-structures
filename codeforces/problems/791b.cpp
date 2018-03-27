#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1500005;
vector<int> g[N];
int vis[N];
int nodes,n,m,cnt;


void dfs(int v)
{
	cnt++;
	vis[v]=1;
	for(int p:g[v])
	{ 
		if(!vis[p]) 
			dfs(p);
	}
}

int32_t main ()
{
	int n,m;
	cin>>n>>m;
	for (int i = 0; i < m; ++i)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for (int i = 0; i <= n; ++i)
	{
		vis[i]=0;
	}
	int edges =0;
	for (int i = 0; i <=n; ++i)
	{
		if (!vis[i])
		{
			cnt =0;
			dfs(i);
			edges += cnt * (cnt-1)/2;
		}
	}
	if (m==edges)
	{
		cout<<"YES";
	}
	else
		cout<<"NO";

	return 0;
}