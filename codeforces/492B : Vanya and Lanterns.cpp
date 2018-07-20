#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define int long long
#define float long double
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    int n,l;
    cin>>n>>l;
    vector<float> a(n);
    for (int i = 0; i < n; ++i)
    {cin>>a[i];}
	sort(a.begin(), a.end());
	float min = a[0]*2;
	for (int i = 0; i < n-1; ++i)
	{
		if ((a[i+1]-a[i]) > min)
		{
			min  = a[i+1] - a[i];
		}
	}
	if (2*(l - a[n-1]) > min)
	{
		min = (l-a[n-1])*2;
	}
	min = min/2;
	cout<<fixed;
	cout<<setprecision(9);
	cout<<min;
	return 0;
}