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
const int MOD=1e9+7;
template<typename T> T gcd(T a,T b) 
{ 
    if(a==0) 
        return b; 
    return gcd(b%a,a); 
}
template<typename T> T pow(T a,T b, long long m)
{
    T ans=1; 
    while(b>0)
    { 
        if(b%2==1) 
            ans=(ans*a)%m; 
        b/=2; 
        a=(a*a)%m; 
    } 
    return ans%m; 
}
int32_t main()
{
    IOS;
    int n;
    cin>>n;
    int ans  = n /100;
    n = n%100;
    ans += n/20;
    n = n%20;
    ans += n/10;
    n = n%10;
    ans += n/5;
    n = n%5;
    ans += n;
    cout<<ans;
    return 0;
}