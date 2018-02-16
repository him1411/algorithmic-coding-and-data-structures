#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define ll long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    int n;
    cin>>n;
    string str;
    string::iterator it;
    cin>>str;
    for (int j = 0; j < n; ++j)
    {
    	for (int i = 0; i < n-1; ++i)
	    {
	    	if ( (str[i] =='a' || str[i] =='e' || str[i] =='i'|| str[i] =='o'||str[i] =='u'||str[i] =='y' )  && (str[i+1] =='a'||str[i+1] =='e'||str[i+1] =='i'||str[i+1] =='o'||str[i+1] =='u'||str[i+1] =='y'))
	    	{
	    		it=str.begin()+(i+1);
				str.erase (it);
	    	}
	    }
    }
    cout<<str;
    return 0;
}