#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n,m,x,y,p;
	cin>>n>>m;
	int g[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			g[i][j]=1;
		}
	}
	
	for (int i = 0; i < n; ++i)
	{
		g[i][i]=0;
	}

	for (int i = 0; i < m; ++i)
	{
		cin>>x>>y;
		x--;y--;
		g[x][y]=2;
		g[y][x]=2;
	}
	if (g[0][n-1]==1)
	{
		p=2;
	}
	else
		p=1;

	deque<pair<int,int>> q;
	pair<int,int> t;

	q.push_back(make_pair(n-1,0));
	bool v[n];
	memset(v,false,sizeof(v));
	long ans;
	bool found = false;
	while(!q.empty())
	{
		t=q.front();
		q.pop_front();
		v[t.first] =true;
		if (t.first ==0)
		{
			ans = t.second;
			found =true;
			break;
		}
		for (int i = 0; i < n; ++i)
		{
			if (g[t.first][i]==p && v[i]==false)
			{
				q.push_back(make_pair(i,t.second+1));
			}
		}
	}

	if (found)
	{
		cout<<max(1L,ans);
	}
	else
		cout<<"-1";

	return 0;
}
