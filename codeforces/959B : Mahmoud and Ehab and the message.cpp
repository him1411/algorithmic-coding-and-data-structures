#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define int long long int
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    int n,l,k,minc,temp,x;
    cin>>n>>k>>l;  
    map<string, int> m;
    vector<string> v;
    vector<int> a;
    string str;

    for (int i = 0; i < n; ++i)
    {
    	cin>>str;
    	v.push_back(str);
    }

    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	m[v[i]]=temp;
    }
    for (int i = 0; i < k; ++i)
    {
    	cin>>x;
    	minc = INT_MAX;
    	for (int j = 0; j < x; ++j)
    	{
    		cin>>temp;
    		temp--;
    		a.push_back(temp);
    		if (minc > m[v[temp]])
    		{
    			minc = m[v[temp]];
    		}
    	}
    	for (int j = 0; j < x; ++j)
    	{
    		m[v[a[j]]] = minc;
    	}
    	a.clear();
    }
    int sum =0;
    for (int i = 0; i < l; ++i)
    {
    	cin>>str;
    	sum = sum + m[str];
    }
    cout<<sum;
    return 0;
}






