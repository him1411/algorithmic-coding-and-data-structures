#include <bits/stdc++.h>
using namespace std;

int main()
{
	int pagenum = 1,n,k,flag,pnum,t,l,count=0;
	cin>>n>>k;
	for (int i = 0; i < n; ++i)
	{
		cin>>t;
		flag=0;
		pnum=1;
		l=1;
		for (int j = 0; j < t; ++j)
		{
			if (pnum == pagenum )
			{
				count++;
			}
			pnum++;
			if (l==k)
			{
				l=0;
				pagenum++;
				if (j == t-1)
				{
					flag=1;
				}
			}
			l++;
		}
		if (flag==0)
		{
			pagenum++;
		}
	}
	cout<<count;
	return 0;
}