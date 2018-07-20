#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
//#define int long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int32_t main()
{
    IOS;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int arr[27];
    int temp;
    for (int i = 0; i < 27; ++i)
    {
    	arr[i]=0;
    }
    for (int i = 0; i < s1.length(); ++i)
    {
    	temp = int(s1[i]-'A');
    	arr[temp]++;
    }

    for (int i = 0; i < s2.length(); ++i)
    {
    	temp = int(s2[i]-'A');
    	arr[temp]++;
    }

    for (int i = 0; i < s3.length(); ++i)
    {
    	temp = int(s3[i]-'A');
    	arr[temp]--;
    }

    for (int i = 0; i < 27; ++i)
    {
    	if (arr[i] != 0)
    	{
    		cout<<"NO";
    		return 0;
    	}
    }

    cout<<"YES";
    return 0;
}
