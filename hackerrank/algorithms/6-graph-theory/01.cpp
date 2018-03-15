//https://www.hackerrank.com/challenges/bfsshortreach/forum
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
    int t;
    cin>>t;
     int n,m;
    while(t--)
    {
        cin>>n>>m;
        vector<vector<int>> v(n+1);

        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int s;
        cin>>s;
        queue<int> q;
        vector<int> vis(n+1,0);
        vector<int> level(n+1,0);
        q.push(s);
        vis[s]=1;
        while(!q.empty())
        {
        	int d=q.front();
        	q.pop();
        	for(int j=0;j<v[d].size();j++)
        	{
        		int node=v[d][j];
        		if(!vis[node])
        		{
        			vis[node]=1;
        			q.push(node);
        			level[node]=level[d]+1;

        		}
        	}
        }
        
        
        for(int i=1;i<=n;i++)
        {
            if(i!=s)
            {
            if(vis[i]==1)
                cout<<6*level[i]<<" ";
            else
                cout<<-1<<" ";
            }
        }
        cout<<endl;
    }
}