#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,c =0,v=0;
    char ch;
    cin >>n;
    vector<int> k(n);
    for (int i = 0; i < n; i++)
    {
    	cin>>ch;
    	if (ch == 'U')
    		{c++;}
    	if (ch == 'D')
    	{
    		{c--;}
    	}
    	k[i]=c;
    }
    for (int i = 1; i < n; i++)
    {
    	if (k[i]==0&&k[i-1]==(-1))
    	{
    		v++;
    	}
    }
    cout<<v;
    return 0;
}