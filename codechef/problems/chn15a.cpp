#include <bits/stdc++.h>
using namespace std;

int main()
{

	int l,n,k;
	cin>>l;
	while(l--)
	{
		int count =0,temp;
		cin>>n>>k;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			if ((temp+k)%7==0 )
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}