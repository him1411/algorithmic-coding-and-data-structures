#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define int long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

const int N=1e5+5;

int n;
int a[N], b[N];

void change(int i)
{
	if(i==1)
		b[i]=1;
	else
		b[i]=a[i-1];
}

int checker()
{
	for(int i=2;i<=n;i++)
		if(b[i]<b[i-1])
			return 0;
	return 1;
}


int32_t main()
{
    IOS;
    int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		int check=0, flag=0;
		for(int i=1;i<=n;i++)
		{
			change(i);
			if(checker())
				flag=1;
			b[i]=a[i];
		}
		if(flag)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
	
	return 0;
}