#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long 
#define ll long long
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define INF 10000000000000007ll
#define MOD 1000000007ll
#define PI 3.14159265359
#define rev(A) reverse((A).begin(), (A).end())
#define sorv(A) sort((A).begin(), (A).end())

int32_t main()
{
    IOS;
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin>>temp;
        v[i].first=temp;
        v[i].second=i+1;
    }
    sort(v.rbegin(), v.rend());
    vector<int> ans;
    ans.push_back(0);
    int sum=0;
    for (int i = 0; i < k; ++i)
    {
        sum += v[i].first;
        ans.push_back(v[i].second);
    }
    sort(ans.begin(), ans.end());
    ans.pop_back();
    ans.push_back(n);
    cout<<sum<<endl;
    for (int i = 0; i+1 < ans.size(); ++i)
    {
        cout<<ans[i+1]-ans[i]<<" ";
    }
    return 0;
}