#include <bits/stdc++.h>
using namespace std;

int main ()
{
	long long int n,k,temp,ans;
	cin>>n>>k;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end(), greater<int>());
	for (int i = 0; i < n; ++i)
	{
		if (k%a[i]==0)
		{
			ans=k/a[i];
			break;
		}
	}
	cout<<ans;
}