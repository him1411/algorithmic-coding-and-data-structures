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
    int n,sum=0,k;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
    	int temp;
    	cin>>temp;
    	sum = sum + temp;
    	v.push_back(sum);
    }
    cin>>k;
    for (int i = 0; i < k; ++i)
    {
    	int temp;
    	cin>>temp;
    	cout<<lower_bound(v.begin(),v.end(),temp)-v.begin()+1<<endl;
    }
    return 0;
}

