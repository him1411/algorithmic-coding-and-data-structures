#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for ( j = i; a[j]>=0 ; ++j)
		{
			sum += a[j];
		}
		lenght = j-i+1;
	}