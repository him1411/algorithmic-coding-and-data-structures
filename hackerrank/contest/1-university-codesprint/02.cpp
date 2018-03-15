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

struct box
{
	int rad;
	int num;
};

struct cylin
{
	int rad;
	int cap;
};

bool compare(box a, box b) 
{return a.rad < b.rad;}

bool compare2(cylin a, cylin b) 
{ return a.rad < b.rad; }

int32_t main()
{
    IOS;
    ll n,m;
    cin>>n>>m;
    box a[n];
    cylin b[m];
    for (int i = 0; i < n; ++i)
    {cin>>a[i].rad;}
    for (int i = 0; i < n; ++i)
    {cin>>a[i].num;}
    for (int i = 0; i < m; ++i)
    {cin>>b[i].rad;}
    for (int i = 0; i < m; ++i)
    {cin>>b[i].cap;}
    sort(a,a+n,compare);
    sort(b,b+m,compare2);
    ll count =0;
    ll max = m-1;
    for (int i = n-1 ; i >= 0 ; i--)
    {
    	if ((a[i].rad < 1.414*b[max].rad) && a[i].num > 0 && b[max].cap > 0)
    	{
    		if (a[i].num < b[max].cap)
    		{
    			count = count + a[i].num;
    			b[max].cap = b[max].cap - a[i].num;
    			a[i].num = 0;
    		}
    		else if (a[i].num >= b[max].cap)
    		{
    			count = count + b[max].cap;
    			a[i].num = a[i].num - b[max].cap;
    			b[max].cap = 0;
    			max--;
    			i++;
    		}
    	}
    	else
    		continue;
    }
    cout<<count;
    return 0;
}