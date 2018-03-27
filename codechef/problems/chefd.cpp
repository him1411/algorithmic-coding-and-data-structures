#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main ()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 1; i <= n; ++i)
	{
		cin>>a[i];
	}
	int k,x,b,p,temp;
	cin>>k;
	for (int i = 0; i < k; ++i)
	{
		cin>>temp;
		if (temp ==1)
		{
			cin>>x>>b>>p;
			for (int i = x; i <=b; ++i)
			{
				if (a[i] % p ==0)
				{
					a[i] = a[i] /p;
				}
			}
		}

		else if (temp ==2)
		{
			cin>>x>>temp;
			a[x] = temp;
		}
	}
	for (int i = 1; i <=n; ++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}