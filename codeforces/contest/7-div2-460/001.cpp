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
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl

int32_t main()
{
    IOS;
    double n,m,a,b;
	double temp,ans=0;
    cin>>n>>m;
    cin>>a>>b;
    temp = a/b;
    //cout<<temp<<endl;
    for (int i = 0; i < n-1; ++i)
    {
    	cin>>a>>b;
    	if ((a/b)<temp)
    	{
    		temp = a/b;
    	}
    }
    ans = temp * m;
    cout<<setprecision(9)<<ans;

    return 0;
}