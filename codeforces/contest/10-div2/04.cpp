#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define ll long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

struct ti
{
	char a;
	char b;
};

int32_t main()
{
    IOS;
    ll n;
    cin>>n;
    string str1,str2;
    cin>>str1>>str2;
    vector<ti> v;
    v.push_back(ti());
    ll count =0;
    for (int i = 0; i < n; ++i)
    {

    	if (str1[i] != str2[i])
    	{
    		trace1(str2);
    		boost::replace_all(str2, str2[i], str1[i]);
    		count++;
    		v[i].a = str1[i];
    		v[i].a = str1[i];
    	}
    }
    cout<<count;
    return 0;
}