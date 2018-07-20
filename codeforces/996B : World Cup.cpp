#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
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
    int n;
    cin>>n;
    vector<int> a;
    int minima = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
        minima = min(minima,temp);
    }
    minima = minima/n;
    minima = minima*n;
    for (int i = 0; i < n; ++i)
    {
        a[i] = a[i] - minima;
    }
    int i=0;
    int j=0;
    int found=1;
    while(found)
    {
        if(a[j]<=i)
        {
            cout<<j+1;
            found=0;
            return 0;
        }
        i++;
        j++;
        if (j==n)
        {
            j=0;
        }
    }


    return 0;
}