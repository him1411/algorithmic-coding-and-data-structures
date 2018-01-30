#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define ll long long
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl

int32_t main()
{
    IOS;
    string temp1,temp2;
    vector<string> ip,ip2,name,com;
    int m,n;
    cin>>n>>m;
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp1>>temp2;
    	ip.push_back(temp2);
    	name.push_back(temp1);
    }
    for (int i = 0; i < m; ++i)
    {
    	cin>>temp1>>temp2;
    	temp2.resize(temp2.size()-1);
    	ip2.push_back(temp2);
    	com.push_back(temp1);
    }
    for (int i = 0; i < m; ++i)
    {
    	int pos = find(ip.begin(), ip.end(), ip2[i]) - ip.begin();
    	if( pos < ip.size()  )
    	{
    		cout<<com[i]<<" "<<ip2[i]<<"; #"<<name[pos]<<endl;
    	}
    }
    return 0;
}