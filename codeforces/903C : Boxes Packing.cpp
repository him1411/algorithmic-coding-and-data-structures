#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,temp,ans,count=0,max=0;
	vector<int> a;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		a.push_back(temp);
	}
	std::sort(a.begin(), a.end());
	ans=a[0];
	for (int i = 0; i < n; i++)
	{
		if (ans==a[i])
		{
			count++;
		}
		else
		{
			count=1;
			ans=a[i];
		}
		if (max <= count)
		{max=count;}
	}
	cout<<max;
	return 0;
}