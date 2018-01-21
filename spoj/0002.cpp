#include <bits/stdc++.h>
using namespace std;

int checkprime(int n)
{
	int flag =1;
	if(n==1)
	{
		flag=0;
	}
	if(n==2)
	{
		flag=1;
	}
	else
	{
		for (int i = 2; i < n; ++i)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
	}
	return flag;
}

int main()
{
	int n,a,b,k;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>a>>b;
		for (int i = a; i <= b; i++)
		{
			k = checkprime(i);
			if (k==1)
			{
				cout<<i<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}
