#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans=(-1000)*1000-1;

	int x,y;
	while(n--)
	{
		cin >> x;
		y=sqrt(x);
		
		if(y*y!=x)
		{
			if(x>ans)
				ans=x;
			if(x<0)
			{
				if(x>ans)
					ans=x;
			}
		}
	}
	cout << ans;

	return 0;
}