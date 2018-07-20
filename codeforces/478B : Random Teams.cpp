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
    int n,m;
    cin>>n>>m;
    int diff = n-m+1;
    int kmax = diff*(diff-1)/2;
    int diff2 = n/m;
    int left = n%m;
    int kmin = left * diff2 *(diff2+1)/2;
    int t = m -left;
    kmin += t*diff2*(diff2-1)/2;
    cout<<kmin<<" "<<kmax;
    return 0;
}
