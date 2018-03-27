#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		arr[i]=1;
	}
	int x,y;
	for (int i = 0; i < m; ++i)
	{
		cin>>x>>y;
		arr[x-1]=0;
		arr[y-1]=0;
	}
	int i =0;
	for (i = 0; i < n; ++i)
	{
		if (arr[i])
		{
			break;
		}
	}
	i++;
	cout<<n-1<<endl;
	for (int j = 1; j <= n; ++j)
	{
		if (i!=j)
		{
			cout<<i<<" "<<j<<endl;
		}
	}
	return 0;
}