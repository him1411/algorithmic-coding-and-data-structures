#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h1,h2,a1,a2,c1,count;
	cin>>h1>>a1>>c1;
	cin>>h2>>a2;
	vector<string> a;
	while(h2>= 0 && h1>= 0)
	{
		h2=h2-a1;
		a.push_back("STRIKE");
		if (h2<=0)
		{
			break;
		}
		h1=h1-a2;
		if( h1 <= a2 )
		{
			h1 =h1+c1;
			a.push_back("HEAL");
		}
	}
	cout<<a.size()<<endl;
	for (int i = 0; i <a.size() ; ++i)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}