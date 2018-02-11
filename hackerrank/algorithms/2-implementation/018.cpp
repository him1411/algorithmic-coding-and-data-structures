#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,rank=1,l=0;
	cin >> n;
	vector<int>v;
	int x;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		if(!(binary_search(v.rbegin(),v.rend(),x)))
		{
			v.push_back(x);
		}
	}
	cin>>m;

	sort(v.begin(),v.end());

	vector<int>::iterator itr;

	for (int i = 0; i < m; i++)
	{
		
		cin >> x;

		itr = upper_bound(v.begin(),v.end(),x);

		cout << v.size()-(itr-v.begin())+1 << endl;
	}

	return 0;
}