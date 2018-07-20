#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define int long long int
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    int n,k;
    cin>>n>>k;
    vector<int> b;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin>>temp;
        b.push_back(temp);
    }
    int flag=0;
    sort(b.begin(), b.end());
    int i =0,ans=n;

    while(i<n)
    {
        int key = b[i];
        int minicount =1;
        int j =i+1;
        if (b[j] == b[i])
        {
            while(b[i]==b[j])
            {
                i++;
                j++;
                minicount++;
            }
        }
        if (b[j] <= key+k  && j<n)
        {
            ans = ans -minicount;
        }
        i++;
    }
    cout<<ans;
    return 0;
}