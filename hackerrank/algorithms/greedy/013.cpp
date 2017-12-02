#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,temp1,temp2;
	vector<int> c;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp1;
		cin>>temp2;
		c.push_back(temp1+temp2);
	}  
	vector<int> idx(c.size());
	iota(idx.begin(), idx.end(), 0);
	sort(idx.begin(), idx.end(),
	[&c](size_t i1, size_t i2) {return c[i1] < c[i2];});
	for (int i = 0 ; i <n ; i++) 
	{
	    cout << idx[i] +1<<" ";
	}
	return 0;
}