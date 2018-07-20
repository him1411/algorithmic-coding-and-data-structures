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
    int n,maxdig=1;
    cin>>n;
    vector<int> v;
    while(n>0)
    {
    	int rem = n%10;
    	v.push_back(rem);
    	n = n/10;
    	if(rem>maxdig)
		{
			maxdig=rem;
		}
    }
    cout<<maxdig<<endl;
    while (true)
    {
    	int x = 0;
    	for (int i = 0; i < v.size(); ++i)
    	{
    		if (v[i]>0)
    		{
    			x = x + pow(10,i);
    			v[i]--;
    		}
    	}
    	if (x>0)
    	{
    		cout<<x<<" ";
    	}
    	else
    		return 0;
    }
}