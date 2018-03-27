#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,count=0,ans=0;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int sub[n];
		sub[n-1]=1;
		for (int i = n-2; i>=0 ; i--)
		{
			if ( (a[i]*a[i+1]) < 0) 
			{
				sub[i] = sub[i+1] +1;
			}
			else
				sub[i]=1;
		}
		for (int i = 0; i < n; ++i)
		{
			cout<<sub[i]<<" ";
		}
		cout<<endl;
	}
	return 0;	
}