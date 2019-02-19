#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long 
#define ll long long
#define PB push_back
#define MP make_pair
#define db long double
#define float long double
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define time() cerr << "\n\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n\n";
#define INF 10000000000000007ll
#define MOD 1000000007ll
#define PI 3.14159265359
#define rev(A) reverse((A).begin(), (A).end())
#define sorv(A) sort((A).begin(), (A).end())

int limit = 600851475143;
vector<bool> arr;

void seiveoferasthanos(int num)
{
	arr.resize(num,true);
	arr[0]=false;
	arr[1]=false;

	for (int i = 2; i < num; ++i)
	{
		if (arr[i]==true)
		{
			for (int j = 2*i; j <num ; j= j+i)
			{arr[j] = false;}
		}
	}
}

int32_t main()
{
    IOS;
    seiveoferasthanos(sqrt(limit));

    for (int i = 0; i < sqrt(limit); ++i)
    {
    	if (arr[i]==true && limit%i ==0)
    	{
    		cout<<i<<endl;
    	}
    }
   	return 0;
}
