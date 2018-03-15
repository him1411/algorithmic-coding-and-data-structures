#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define int long long
#define float long double
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    int n;
    cin>>n;
    if (n%2==0)
    {
    	int l = n/2;
    	cout<<l<<endl;
    	for (int i = 0; i < l; ++i)
    	{
    		cout<<"2 ";
    	}
    }
    else
    {
    	n = n-3;
    	int l = n/2;
    	cout<<l+1<<endl;
    	for (int i = 0; i < l; ++i)
    	{
    		cout<<"2 ";
    	}
    	cout<<"3";
    }
    return 0;
}
