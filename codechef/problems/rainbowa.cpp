#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define ll long long
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl

void checker(int n)
{
	vector<ll> v;
	ll temp;
	for (int j = 0; j < n; ++j)
	{
		cin>>temp;
		v.push_back(temp);
	}
	if (v[0]!=1) 
	{
		cout<<"no"<<endl;
			return ;
	}
	if (v[n/2]!=7) 
	{
  		cout<<"no"<<endl;
  		return ;
	}
	for (int  k = 0; k <n; k++) 
	{
		if (v[k]!=v[n-1-k]) 
		{
      		cout<<"no"<<endl;
      		return ;
  		}
	}
	for (int l = 0; l <n/2; l++) 
	{
   		int key = v[l+1]-v[l];
   		if (key >1 || key<0) 
   		{
    		cout<<"no"<<endl;
     		return ;
   		}
	}
	cout<<"yes"<<endl;
}


int32_t main()
{
    IOS;
    ll t,n,temp;
    vector<ll> v;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
    	cin>>n;
    	checker(n);
    }
    return 0;
}