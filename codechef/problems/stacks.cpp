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
	int t;
	cin>>t;
	while(t--)
	{
		int n,temp;
		cin>>n;
		vector<int> v;
		cin>>temp;
		v.push_back(temp);
		for (int i = 1; i < n; ++i)
		{
			cin>>temp;
			vector<int>::iterator low1;
			low1 = upper_bound(v.begin(), v.end(),temp);
			int y = low1 - v.begin();
			//trace3(temp,y,v.size());
			if (y == v.size())
			{
				v.push_back(temp);
			}
			else
				v[y]=temp;
		}
		cout<<v.size()<<" ";
		for (int i = 0; i < v.size(); ++i)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	
}