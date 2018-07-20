#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m;
	cin>>n>>m;
	long long k = pow(2,n);
	long long res = m%k;
	cout<<res;
	return 0;
}