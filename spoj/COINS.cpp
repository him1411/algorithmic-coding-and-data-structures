#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long 
#define ll long long
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define INF 10000000000000007ll
#define MOD 1000000007ll
#define PI 3.14159265359
#define rev(A) reverse((A).begin(), (A).end())
#define sorv(A) sort((A).begin(), (A).end())

int a[1000000];

int maxval(int n)
{
	if (n<1000000 && a[n]!=0)
		return a[n];

	if (n< n/2+n/3+n/4)
		return (maxval(n/2)+maxval(n/3)+maxval(n/4));

	else 
	{
		if (n<1000000)
			a[n]=n;

		return n;
	}
}

int32_t main()
{
    IOS;
    int n;
    for (int i = 0; i <1000000 ; ++i)
    { a[i] = maxval(i); }
	
	while(cin>>n)
	{cout<<maxval(n)<<endl;}

	return 0;
}