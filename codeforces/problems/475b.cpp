#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
//#define int long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    int n,m;
    char a[20],b[20];
    cin>>n>>m;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    for (int i = 0; i < m; ++i)
    {
    	cin>>b[i];
    }
    if (a[0] == '<' && a[n-1]=='>' && b[0]=='v' && b[m-1]=='^')
    {
    	cout<<"YES";
    	return 0;
    }
    if (a[0] == '>' && a[n-1]=='<' && b[0]=='^' && b[m-1]=='v')
    {
    	cout<<"YES";
    	return 0;
    }

    cout<<"NO";
    return 0;
}