#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,temp=0,min=0;
	cin>>n>>k;
	vector<int> a;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		a.push_back(temp);
	}
	std::sort(a.begin(), a.end());
	min = a[k-1]-a[0];
	for (int i = 1; i < n; ++i)
	{
		if(   min > ( a[i+k-1]-a[i])  )
		{
			min =a[i+k-1]-a[i];
		}
		if( (i+k) >= n )
		{
			break;
		}
	}
	cout<<min;
}
