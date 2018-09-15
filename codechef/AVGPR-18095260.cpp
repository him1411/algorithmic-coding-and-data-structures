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
    int t;
    cin>>t;
    while(t--)
    {
	  	int n,temp;
	    cin >> n;
	    int arr[2001];
	    for (int i = 0; i < 2001; ++i)
	    {
	    	arr[i]=0;
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> temp;
	        arr[temp+1000]++;
	    }
	    for(int i=1;i<2000;i++)
	    {
	    	if ( arr[i]>0)
	    	{
	    		for (int j = i+1; j <2001 ; ++j)
	    		{
		    		if ( arr[i]>0 && arr[j]>0  && ((i+j)%2==0) && arr[(i+j)/2]>0)
		    		{
		    			count = count + arr[i]*arr[j];
		    		}
	    		}  
	    	}      
	    }
	    for (int i = 0; i < 2001; ++i)
	    {
	    	if (arr[i]>1)
	    	{
	    		count += arr[i]*(arr[i]-1)/2;
	    	}
	    }
	    cout << count << endl;
	}
    return 0;
}