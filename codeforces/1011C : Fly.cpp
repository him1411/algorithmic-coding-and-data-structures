#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long 
#define ll long long
#define float long double
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

int32_t main()
{
    IOS;
    float n,mass;
    cin>>n>>mass;
    float orgmass = mass;
    vector<int> takeoff(n),land(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>takeoff[i];
    }
    cin>>land[n-1];
    for (int i = 0; i < n-1; ++i)
    {
    	cin>>land[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	if (takeoff[i]==1 || land[i]==1)
    	{
    		cout<<"-1";
    		return 0;
    	}
    }
    reverse(takeoff.begin(), takeoff.end());
    reverse(land.begin(), land.end());
    float fuel =0.0;
    for (int i = 0; i < n; ++i)
    {
    	fuel  = mass/(land[i]-1);
    	mass = mass + fuel ;
    	//trace2(mass,fuel);
    	fuel = mass / (takeoff[i]-1);
    	mass += fuel;
    	//trace2(mass,fuel);
    }
    cout<<fixed<<setprecision(10)<<mass - orgmass;
    return 0;
}

