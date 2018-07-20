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
    int n,s,p;
    cin>>n>>s>>p;
    vector<char> v;
    char ch;
    int count =0;
    cin>>ch;
    if (ch=='.' && s!=0 && s>=p)
    {
    	v.push_back('s');
    	s--;
    	count++;
    }
    else if (ch=='.' && p!=0 && p>s)
    {
    	v.push_back('p');
    	p--;
    	count++;
    }
    else if (ch=='*')
    {
    	v.push_back('*');
    }
    for (int i = 1; i < n; ++i)
    {
    	cin>>ch;
    	if (ch == '.' && v[i-1]=='*')
    	{
    		if (s>p&&s>0)
    		{
    			v.push_back('s');
    			s--;
    			count++;
    		}
    		else if(p>0)
    		{
    			v.push_back('p');
    			p--;
    			count++;
    		}
    		else
    		{
    			v.push_back('e');
    		}
    	}
    	else if (ch == '.'  && v[i-1]!='*')
    	{
    		if (v[i-1]!='p' && p>0)
    		{
    			v.push_back('p');
    			p--;
    			count++;
    		}
    		else if (v[i-1]!='s' && s>0)
    		{
    			v.push_back('s');
    			s--;
    			count++;
    		}
    		else if (v[i-1] =='p' && s==0)
    		{
    			v.push_back('e');
    		}
    		else if (v[i-1] =='s' && p==0)
    		{
    			v.push_back('e');
    		}
    	}
    	else if (ch == '*')
    	{
    		v.push_back('*');
    	}
    	if (s<=0 && p<=0)
    	{
    		//trace3(i,s,p);
    		break;
    	}

    }
    cout<<count;
    return 0;
}