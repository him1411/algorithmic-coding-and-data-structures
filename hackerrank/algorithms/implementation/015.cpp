#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q=0,x=0,y=0,z=0,j=0,k=0;
	cin>>q;
	for (int i = 0; i < q; i++)
	{
		cin>>x>>y>>z;
		j = abs(z-y);
		k = abs(z-x);
		if(j>k)
		{
			cout<<"Cat A"<<endl;
		}
		if(j<k)
		{
			cout<<"Cat B"<<endl;
		}
		if(j==k)
		{
			cout<<"Mouse C"<<endl;
		}
	}
	return 0;
}