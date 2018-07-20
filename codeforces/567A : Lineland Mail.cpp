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
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
 
    int mn = abs(a[1]-a[0]);
    int mx = abs(a[n-1] - a[0]);
    cout<<mn<<" "<<mx<<endl;
    for (int i = 1; i < n-1; ++i)
    {
    	mn = min(   abs(a[i]-a[i-1]) , abs(a[i]-a[i+1])   );
    	mx = max(   abs(a[i]-a[0]) , abs(a[i]-a[n-1])   );
    	cout<<mn<<" "<<mx<<endl;  
    }

    mn = abs(a[n-1] - a[n-2]);
    mx = abs (a[n-1] - a[0] );
    cout<<mn<<" "<<mx;
    return 0;
}