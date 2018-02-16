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

int32_t main()
{
    IOS;
    int n,temp;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int max=1;
    int maxsim=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==v[i+1])
        {
            max++;
        }
        //trace3(max,v[i],v[i+1]);
        if(max>maxsim)
        {
            maxsim=max;
        }
        if(v[i]!=v[i+1])
        {
            max=1;
        }
    }
    int ans = n-maxsim;
    cout<<ans;
    return 0;
}
