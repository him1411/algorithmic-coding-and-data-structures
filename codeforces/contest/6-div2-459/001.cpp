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

int32_t main()
{
    IOS;
    int arr[1001];
    arr[0] =0;
    arr[1]=1;
    arr[2]=1;
    for (int i = 2; i <= 1000; ++i)
    {
    	arr[i] = arr[i-1] + arr[i-2];
    }
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
    	 bool exists = find(begin(arr), end(arr), i) != end(arr);
    	 if (exists == true)
    	 {
    		cout<<"O";
    	 }
    	 else
    	 	cout<<"o";
    }
    return 0;
}