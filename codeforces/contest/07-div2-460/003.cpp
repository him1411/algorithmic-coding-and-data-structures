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
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl

int32_t main()
{
    IOS;
    ll n,m,k,count=0,l,flag;
    cin>>n>>m>>k;
    char a[n+1][m+1];
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		cin>>a[i][j];
    	}
    }

    for (int i = 0; i < n; i++)
    {
    	flag =0;
    	for (int j = 0; j < m; j++)
    	{	
    		if (k != 1)
    		{
    			if (a[i][j] == '.')
	    		{
	    			flag++;
	    			if (flag>=k)
		    		{
		    			count++;
		    			
		    		}
	    		}
	    		else if (a[i][j] != '.')
	    		{
	    			flag =0;
	    		}

	    	}
    		if (k==1)
    		{
    			if (a[i][j] == '.')
    				count++;
    		}
    	}
    }

	if (k!=1)
	{
		
	    for (int j = 0; j < m; j++)
	    {
	    	flag =0;
	    	for (int i = 0; i < n; i++)
	    	{	
	    		if (k != 1)
	    		{
	    			if (a[i][j] == '.')
		    		{
		    			flag++;
		    			if (flag>=k)
			    		{
			    			count++;
			    			
			    		}
		    		}
		    		else if (a[i][j] != '.')
		    		{
		    			flag =0;
		    		}	
	    		}
	    	}
	    }
	}
 
    cout<<count;
    return 0;
}
