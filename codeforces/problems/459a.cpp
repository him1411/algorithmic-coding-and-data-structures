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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a==c)
    {
    	cout<< a - (d-b)<<" "<<b<<" ";
    	cout<< a - (d-b)<<" "<<d<<" ";
    }
    else if (b==d)
    {
    	cout<<a<<" "<<b-(c-a)<<" ";
    	cout<<c<<" "<<d-(c-a)<<" ";
    }
    else if (abs(a-c)== abs(b-d))
    {
    	cout<<a<<" "<<d<<" ";
    	cout<<c<<" "<<b<<" ";
    }
    else
    	cout<<-1;

    return 0;
}