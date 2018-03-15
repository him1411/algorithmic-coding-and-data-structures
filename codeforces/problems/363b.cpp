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
    int n;
    cin >> n;
    int k;
    cin >> k;

    int arr[n];



    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    int ansj=0;
    
    int sum=0;

    for(int i=0;i<k;i++)
    {
    	sum+=arr[i];
    }

    int ans=sum;

    for(int i=k;i<n;i++)
    {
    	sum = sum + arr[i] - arr[i-k];
    	if(sum<ans)
    	{
    		ans=sum;
    		ansj=i-k+1;
    	}
    }

    cout << ansj+1;

    return 0;
}