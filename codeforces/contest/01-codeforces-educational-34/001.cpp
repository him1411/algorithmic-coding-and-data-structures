#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,temp,j,flag;
	vector<int> a;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		j=0;flag=0;
		cin>>temp;
		a.push_back(temp);
		for (int j = 0; j*3 <= a[i]; ++j)
		{
			if ( (a[i]- (j*3) ) %7 ==0)
			{
				flag=1;
				break;
			}
		}
		if ( flag==1  )
		{cout<<"YES"<<endl;}
		else
		{cout<<"NO"<<endl;}
		
	}
	return 0;
}
