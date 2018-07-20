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
    int n,m,x;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	a[i]=0;
    }
    for (int i = 0; i < m; ++i)
    {
    	cin>>x;
    	x--;
    	a[x]++;
    }
    int* i1;
    i1 = min_element(a, a + n);
    cout<<*i1;
    return 0;
}
