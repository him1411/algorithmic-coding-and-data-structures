#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long 
#define ll long long
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define INF 10000000000000007ll
#define MOD 1000000007ll
#define PI 3.14159265359
#define rev(A) reverse((A).begin(), (A).end())
#define sorv(A) sort((A).begin(), (A).end())

pair<int, int> swap( pair<int,int> p1 )
{
	int temp = p1.first;
	p1.first = p1.second;
	p1.second = temp;
	return p1;
}

int32_t main()
{
    IOS;
    int  n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; ++i)
    {
    	int temp1,temp2;
    	cin>>temp1>>temp2;
    	v[i].first = temp1;
    	v[i].second = temp2;
    }

    int cur = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
    	if (v[i].first <= cur && v[i].second <= cur)
    	{
    		cur = max (v[i].first,v[i].second);
    	}
    	else if (v[i].first <= cur)
    	{
    		cur = v[i].first;
    	}
    	else if (v[i].second <= cur)
    	{
    		cur = v[i].second;
    	}
    	else
    	{
    		cout<<"NO";
    		return 0;
    	}
    }
    cout<<"YES";
    return 0;
}