#include <bits/stdc++.h>
using namespace std;
int main()
{
	string temp,s;
	cin>>s;
	int n,fill,count=0;
	cin>>n;
	temp=s;
	while(s.length()<n)
	{
		s=s+temp;
	}
	cout<<s<<endl;
	fill = s.length() - n;
	if (fill<0)
	{
		for (int i = 0; i < fill; ++i)
		{
			s =s + temp[i];
		}
	}
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i]=='a')
		{count++;}
	}
	cout<<count;
	return 0;
}