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
    int n,k,temp,count=0,i;
    vector<int> a;
    cin>>n>>k;
    for (int i = 0; i < n; ++i)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for (i = 0; i < n; ++i)
    {
        if (a[i]<=k)
        {
            count++;
        }
        else
            if (a[i]>k)
            {
                break;
            }
    }
    if (count == n)
    {
        cout<<count;
        return 0;
    }
    //trace1(i);
    for (int j = n-1; j >i ; j--)
    {
        if (a[j]<=k)
        {
            count++;
        }
        else if (a[j]>k)
        {
            break;
        }
    }
    cout<<count;
    return 0;
}