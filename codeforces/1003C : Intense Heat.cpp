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
    int n,k,i=0,j=0;
    long double sum =0;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
        sum += v[i];
    }
    sum = sum/n;
    for (int l = k; l <n ; ++l)
    {
        long double tempsum=0;
        for (int j = 0; j < l; ++j)
        {
            tempsum += v[j];
            //trace2(v[j],tempsum);
        }
        //trace1(tempsum);
        for (i = 0; i <= n-l ; ++i)
        {
            sum = max(sum,tempsum/l);
            tempsum  = tempsum - v[i];
            tempsum = tempsum + v[i+l];
            //trace2(sum,tempsum);
        }
    }
    cout<<fixed<<setprecision(15)<<sum;
    return 0;
}
