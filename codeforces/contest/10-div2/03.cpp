#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define pb push_back
#define eb emblace_back
#define mp make_pair
#define ff first
#define ss second
#define int long long
#define pint pair<int,int>
#define uint unsigned long long
#define ld long double
#define trace1(x)        cerr<<#x<<": "<<x<<endl
#define trace2(x, y)     cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)  cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define vi vector<int> 
#define vii vector< vector<int> >
#define vpi vector< pair<int,int> >   
#define mod %1000000007
#define ii pair<int,int>
#define testcases int test; cin >> test; for (int tc = 1; tc <= test; tc++)
#define aint(x) x.begin(),x.end()
#define raint(x) x.rbegin(),x.rend()
#define get(x,y) get<x>(y)
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
#define dbv(st) cerr << "Printing "#st << " --> \n"; for(auto i : st) cerr << i << " "; cerr << "\n" << flush;
template <typename Arg1>void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr(names + 1, ',');
    std::cerr.write(names, comma - names) << " = " << arg1;
    ZZ(comma, args...);
}
int32_t main()
{
    IOS;
    int n,s,f;
    cin>>n;
    vi v(n+1);
    vi cf(n+1);
    int c=0;
    for(int i=1;i<=n;i++)
	{
		cin>>v[i];
		c=c+v[i];
		cf[i]=c;
	}
    cin>>s>>f;
    int ans=0;
    int ind;
    for(int i=1;i<=n;i++)
    {
    	int k1=(s-i+n)%n;
    	int k2=(f-1-i+n)%n;
    	int z1=1+k1;
    	int z2=1+k2;
    	int temp;
    	//trace2(z1,z2);
    	if(z2>=z1)
    		temp=cf[z2]-cf[z1-1];
    	else
    		temp=cf[n]-cf[z1-1]+cf[z2];
    	if(temp>ans)
    	{
    		ans=temp;
    		ind=i;
    	}
    }
    cout<<ind;
	return 0;
}