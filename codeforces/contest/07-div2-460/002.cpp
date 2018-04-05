#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define ll long long
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl

bool sumofdigit(ll num)
{
	ll sum =0;
	while(num>0)
	{
		sum = sum + (num % 10);
		num = num /10; 
	}
	if (sum ==10)
	{
		return true;
	}
	else
		return false;
}

int32_t main()
{
    IOS;
    ll k;
    cin>>k;
    ll num = 19;
    ll count = 0;
    bool check = false;
    while(count<=k)
    {
    	check = sumofdigit(num);
    	if (check ==  true)
    	{
    		count++;
    		num++;
    		check = false;
    	}
    	else if (count == k)
    	{
    		break;
    	}
    	else
    		num++;
    }
    num--;
    cout<<num;
    return 0;
}