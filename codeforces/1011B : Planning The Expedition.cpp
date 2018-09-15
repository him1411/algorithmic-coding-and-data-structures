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

int32_t main()
{
    IOS;
    int n,k;
    cin>>n>>k;
    map<int,int> m1;
    for (int i = 0; i < k; ++i)
    {
    	int temp;
    	cin>>temp;
    	m1[temp]++;
    }
    for (auto i = m1.begin(); i != m1.end() ; ++i)
    {
    	int temp2 = i->first;
    	int temp1 = i->second;

    }
    if (n > k)
    {
    	cout<<"0";
    	return 0;
    }
    if (n==k)
    {
    	cout<<"1";
    	return 0;
    }
    int max = k/n;
    while ( max > 0 )
    {
    	int sum =0;
    	for (auto i = m1.begin(); i != m1.end() ; ++i)
    	{
    		sum +=  i->second / max;
    		if (sum >= n)
    		{
    			break;
    		}
    	}
    	if (sum >= n)
    	{
    		cout<<max;
    		return 0;
    	}
    	else
    		max--;
    }
    cout<<max;
    return 0;
}
