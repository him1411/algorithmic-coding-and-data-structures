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
    int n,sum=0,temp,count=0,c1=0,c2=0,c3=0;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	if (temp ==4)
    		count++;
    	else if (temp==3)
    		c3++;
    	else if (temp ==2)
    		c2++;
    	else
    		c1++;
    }
    count += c3;
    c1 = c1 - c3;
    count = count + (c2/2);
    if(c2%2!=0)
    {
        count++;
        c1=c1-2;
    }
    if(c1>0)
    {
        count=count+((c1+3)/4);
    }
    cout<<count;
    return 0;
}