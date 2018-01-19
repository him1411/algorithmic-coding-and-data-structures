#include <bits/stdc++.h>
using namespace std;

int main()
{
	int hh,mm,count=0,x;
	cin>>x;
	cin>>hh>>mm;
	while( !(hh%10==7 || mm%10==7 ))
	{
		if (hh%10==7 ||  mm%10==7 )
		{
			break;
		}
		mm = mm - x;
		count++;
		if (mm < 0)
		{
			mm = mm + 60 ;
			hh--;
			if (hh<0)
			{
				hh = 23;
			}
		}
	}
	cout<<count;
}