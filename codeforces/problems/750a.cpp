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
    int n,k;
    cin>>n>>k;
    int time = 240 - k;
    int count =0,i=1;
    while(time>0  && i<=n )
    {
    	time = time - 5*i;
    	if (time<0)
    	{
    		break;
    	}
    	count++;
    	i++;
    	//trace2(time,count);
    }
    cout<<count;
    return 0;
}