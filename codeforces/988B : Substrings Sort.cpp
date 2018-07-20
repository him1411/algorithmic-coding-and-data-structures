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

bool compare(string &s1,string &s2)
{
    return s1.size() < s2.size();
}

int32_t main()
{
    IOS;
    int n;
    cin>>n;
    vector<string> v,ans;
    string tempo;
    for (int i = 0; i < n; ++i)
    {
    	cin>>tempo;
    	v.push_back(tempo);
    }
    if (n==1)
    {
    	cout<<"YES"<<endl<<v[0];
    	return 0;
    }
    sort(v.begin(), v.end(),compare);
    for (int i = 0; i <= v.size()-2; ++i)
    {   	
    	for (int j = i+1; i < n; ++i)
    	{
    		if (v[j].find(v[i]) != string::npos)
    		{
    			ans.push_back(v[i]);
    			break;
    		}
    		
    	} 	
    }
    ans.push_back(v[n-1]);
  	if (ans!=v)
  	{
  		cout<<"NO";
  		return 0;
  	}
  	else
  	{
  		cout<<"YES"<<endl;
  		for (int i = 0; i < n; ++i)
  		{
  			cout<<ans[i]<<endl;
  		}
  	}
    return 0;
}