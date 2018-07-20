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
    int n,sum =0;
    cin>>n;
    string s1= "Tetrahedron", s2 = "Cube",s3 = "Octahedron",s4 = "Dodecahedron";

    string temp,s5="Icosahedron";
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	if (temp==s1)
    		sum = sum + 4;
    	else if ( temp ==s2)
    		sum = sum + 6;
    	else if (temp ==s3)
    		sum = sum + 8;
    	else if(temp ==s4)
    		sum = sum + 12;
    	else if(temp == s5)
    		sum = sum + 20; 
    }
    cout<<sum;
    return 0;
}