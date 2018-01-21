#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,ans;
	while(cin>>n)
	{
		if (n==0)
			cout<<endl;
		else
		{
			ans = n*(n+1)*(2*n+1)/6;
			cout<<ans<<endl;
		}
	}
	return 0;
}