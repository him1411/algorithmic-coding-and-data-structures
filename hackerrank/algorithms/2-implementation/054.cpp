#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
    cin >> n;
    int **a = new int*[n];

	for(int i = 0; i < n; ++i) 
	{a[i] = new int[n];}

    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n; ++j)
		{scanf("%1d",&a[i][j]);}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if( (i>=1)&&(i<n-1) && (j>=1)&&(j<n-1) )
    		{
				if ( ( a[i-1][j] < a[i][j] ) && ( a[i][j] > a[i+1][j] )  &&  ( a[i][j-1] < a[i][j] ) && ( a[i][j] > a[i][j+1] )   )
				{cout<<"X";}
				else
				{cout<<a[i][j];}
			}
			else
			{cout<<a[i][j];}
		}
		cout<<endl;
	}
	return 0;
}