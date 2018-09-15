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

int32_t main()
{
    IOS;
    int t,x,y,pro,m,count=0,l;
    cin>>t;
    for (int j = 0; j < t; ++j)
    {
    	cin>>m>>x>>y;
    	pro = x*y;
    	int* arr = new int[102];
    	for (int i = 1; i <= 100; ++i)
    	{
    		arr[i] = 0;
    	}
    	for (int i = 0; i < m; ++i)
    	{
    		cin>>l;
    		arr[max(l-pro,1)] += 1;
    		arr[min(l+pro+1,101)] -= 1;
    	}
    	for (int i = 2; i <= 100; ++i)
    	{
    		arr[i] += arr[i-1];
    	}
    	count=0;
    	for (int i = 1; i <=100; ++i)
    	{
    		if (arr[i]==0)
    			count++;
    	}
    	cout<<count<<endl;
    }
    return 0;
}