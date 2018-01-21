#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	int temp;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end(),greater<int>());
	for (int i = 0; i < n; ++i)
	{
		if (a[i]>=0)
		{
			temp = sqrt(a[i]);
			if (temp*temp != a[i])
			{
				cout<<a[i];
				return 0;
			}
		}
		if (a[i]<0)
		{
			cout<<a[i];
			break;
		}
	}

	return 0;
}