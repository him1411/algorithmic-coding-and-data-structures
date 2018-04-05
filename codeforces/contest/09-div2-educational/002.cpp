#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define ll long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    int n,temp;
    vector<int> v1,v2;
    int bound = pow(10,6)/2;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	if (temp<=bound)
    		v1.push_back(temp);
    	else
    		v2.push_back(temp);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(), v2.end());
    if (v2.size()==0)
    {
    	ll max1 = v1[v1.size()-1]-1;
    	cout<<max1;
    	return 0;
    }
    else if (v1.size()==0)
    {
    	ll max2 = pow(10,6)-v2[0];
    	cout<<max2;
    	return 0;
    }
    else
    {
    	ll max1 = v1[v1.size()-1]-1;
	    ll max2 = pow(10,6)-v2[0];
	    if (max1>max2)
	    {
	    	cout<<max1;
	    }
	    else
	    	cout<<max2;

	    return 0;
    }
}
    
    
