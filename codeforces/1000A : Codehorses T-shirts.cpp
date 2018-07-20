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

int check(string s1, string s2)
{
    int count =0;
    for (int i = 0; i < s1.length(); ++i)
    {
        if (s1[i]!=s2[i])
        {
            count++;
        }
    }
    return count;
}
int32_t main()
{
    IOS;
    int n,count=0;
    string temp;
    cin >> n;
    vector<string> v1,v2;
    for (int i = 0; i < n; ++i)
    {
        cin>>temp;
        v1.push_back(temp);
    }
    for (int i = 0; i < n; ++i)
    {
        cin>>temp;
        v2.push_back(temp);
    }

    for(auto i=v1.begin();i!=v1.end();i++)
    {
        for(auto j=v2.begin();j!=v2.end();j++)
        {
                if(*i == *j)
                {
                    *i="ZZZZ";
                    *j="ZZZZ";
                }
        }
    }


    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for (int i = 0; i < n; ++i)
    {
        if (v1[i] != "ZZZZ" && v2[i] != "ZZZZ")
        {
            if (v1[i] != v2[i] && v1[i].length() == v2[i].length() )
                count += check(v1[i],v2[i]);
            else if (v1[i].length() != v2[i].length() )
            {
                int l1=v1[i].length();
                int l2=v2[i].length();
                count += abs( l1-l2 );
            }
        }
    }

    cout<<count;
}