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
    vector<int> v;

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int count =2;
    for (int i = 0; i < n-1; ++i)
    {
        if (abs(v[i+1] - v[i]) > 2*k)
        {
            count = count+2;
        }
        else if (v[i+1] - v[i] == 2*k )
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}