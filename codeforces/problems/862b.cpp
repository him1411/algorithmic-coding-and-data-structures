#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;

vector< vector<int>> v;
int level[N];
int levc[N];
int vis[N];
int n;

void dfs(int j, int par,int lev)
{
	if (vis[j])
	{
		return;
	}
	vis[j]=1;
	level[j]=lev;
	levc[lev]++;
	for(auto it:v[j])
	{
		dfs(it,j,lev+1);
	}
}

int32_t main()
{
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1,1,1);
	int ev=0,od=0;
	for (int i = 1e5; i >=2; i=i-2)
	{
		ev = ev + levc[i];
	}
	for (int i = 1e5; i >=1; i=i-2)
	{
		od = od + levc[i];
	}
	int ans = od*ev;
	ans = ans - (n-1);
	cout<<ans;
	return 0;
}