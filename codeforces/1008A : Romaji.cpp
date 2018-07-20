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
    string str;
    cin>>str;
    int i=0;
    for (i = 0; i < str.length()-1; ++i)
    {
        if (str[i] == 'n')
        {
            continue;
        }
        else if ( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            continue;
        }
        else if ( (str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u') && (str[i+1] == 'a' ||str[i+1] == 'e' ||str[i+1] == 'i' ||str[i+1] == 'o' ||str[i+1] == 'u') )
        {
            continue;
        }
        else
        {
            //trace2(str[i],str[i+1]);
            cout<<"NO";
            return 0;
        }
    }
    i=str.length()-1;
    if( str[i]== 'a'||str[i] == 'e'||str[i]== 'i'||str[i]== 'o'||str[i]== 'u' || str[i] =='n')
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        cout<<"NO";
        return 0;
    }
    
}