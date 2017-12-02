#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,flag,temp,k,size;
	cin>>n;
	vector<int> a,b;
	for (int i = 0; i < n; ++i)
	{
		flag=1;
		cin>>size>>k;
		for (int i = 0; i < size; ++i)
		{
			cin>>temp;
			a.push_back(temp);
		}
		for (int i = 0; i < size; ++i)
		{
			cin>>temp;
			b.push_back(temp);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), greater<int>());
		for (int i = 0; i < size; ++i)
		{
			if ( (a[i]+b[i]) < k)
			{
				flag=0;
				break;
			}
		}
		if (flag==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		a.clear();
		b.clear();
	}
	return 0;
}