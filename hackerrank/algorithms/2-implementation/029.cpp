#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,k,n,o=0,a;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
    	o=0;
    	cin >> k;
    	t=k;
    	 while(t>0)
	    {
	    	a =t%10;
	    	if( (a!=0) && (k%a==0)  )
	    	{
	            o++;
	        }
	    	t=t/10;        
	    }
    cout<<o<<endl;
    }
    return 0;
}