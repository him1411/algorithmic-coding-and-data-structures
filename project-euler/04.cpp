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

int limit = 4000000;

bool checkpalindrome(int num)
{
	string temp1 = to_string(num);
	string temp2 = temp1;
	reverse(temp1.begin(), temp1.end());
	if (temp1==temp2)
	{
		return true;
	}

	return false;
}
 
int32_t main()
{
    IOS;
    int i =100,j=100;
    int ans = 1001;

    //cout<<checkpalindrome(ans);
    for (int i = 100; i < 1000; ++i)
    {
    	for (int j = i; j <1000 ; ++j)
    	{
    		int temp = i*j;
    		if(checkpalindrome(temp)==true)
    			ans = max(ans,temp);
    	}
    }
    cout<<ans;
    return 0;
}