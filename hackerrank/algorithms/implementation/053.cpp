#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, sum=0,count=0;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		sum = sum +a[i];
	}
	if (sum % 2==1)
	{
		cout<<"NO";
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			if (a[i]%2==1)
			{
				a[i]++;
				a[i+1]++;
				count = count +2; 
			}
		}
		cout<<count;
	}
	return 0;
}