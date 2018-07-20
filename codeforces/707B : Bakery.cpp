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
    int n,m,k,a,b,c;
    cin>>n>>m>>k;
    vector<pair<int,int> > v[n];
    vector<bool> stor(n,false);
    for (int i = 0; i < m; ++i)
    {
    	cin>>a>>b>>c;
    	v[a-1].push_back(make_pair(b-1,c));
    	v[b-1].push_back(make_pair(a-1,c));
	}

	int min = INT_MAX;
	for (int i = 0; i < k; ++i)
	{
		int temp;
		cin>>temp;
		stor[temp-1] = true;
	}

	for (int i = 0; i < n; ++i)
	{
		if (stor[i]==true)
		{
			for (int j = 0; j < v[i].size(); ++j)
			{
				if (v[i][j].second<min && stor[v[i][j].first] != true )
				{
					min = v[i][j].second;
				}
			}
		}
	}

	if (min != INT_MAX)
	{
		cout<<min;
	}
	else
		cout<<"-1";

	return 0;
}
