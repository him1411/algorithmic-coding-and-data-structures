#include <bits/stdc++.h>
using namespace std;

int solve(int n, int p)
{
	int r=0;;
    if ( p > (n/2) )
    {
    	if((n%2==0 && p%2==0) || (n%2==1 && p%2==1) )
    	{r = (n-p)/2;}
	    if( p%2==1 && n%2==0)
    	{r = (n-p+1)/2;}
    	if( (n%2==1) && (p%2==0) )
    	{r = (n-p-1)/2;}
	}
    else
    {
    	if(p%2==1)
    	{r=(p-1)/2;}
    	else
    	{r=p/2;}
    }
    cout<<r;
    return 0;
}

int main() 
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    //cout << result << endl;
    return 0;
}
