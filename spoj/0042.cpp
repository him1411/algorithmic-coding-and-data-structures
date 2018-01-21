#include <bits/stdc++.h>
using namespace std;

long long reverse(long long num)
{
	long long reversed = 0,quo,rem;
	quo = num;  
	while (quo != 0)
	{
		rem = quo % 10;
		reversed = reversed * 10 + rem;
		quo /= 10;
	}
	return reversed;
}

int main()
{
	long long n,a,b,sum;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		a = reverse(a);
		b = reverse(b);
		sum = a+b;
		sum = reverse(sum);
		cout<<sum<<endl;
	}
	return 0;
}