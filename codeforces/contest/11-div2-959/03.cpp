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
    int n,k,mm;
    cin>>n>>k>>mm;
    map<string,int> m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]=i;
    }
    vector<int>  g(n,-1);
    vector<int> c(k,1000000000);
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        for(int j=0;j<x;j++)
        {
            int a;
            cin>>a;
            a--;
            g[a]=i;
            c[i]=min(c[i],v[a]);
        }
    }
    ll cost=0;
    for(int i=0;i<mm;i++)
    {
        string s;
        cin>>s;
        int a=m[s];
        if(g[a]==-1)
            cost+=v[a];
        else
            cost+=c[g[a]];
    }
    cout<<cost;
    return 0;
}