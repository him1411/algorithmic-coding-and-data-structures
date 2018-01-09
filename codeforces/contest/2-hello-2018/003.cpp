#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,min,temp;
	cin>>n>>min;
	vector<long long > value(n);
	vector<long long> capacity(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>value[i];
	}
	for (int i = 0; i < n; ++i)
	{
		temp = pow(2,i);
		capacity[i] = temp;
	}
	vector< tuple<double ,long , long > > idx;
	//vector< pair< int, int>>  idx;
	for (int i = 0; i < n; ++i)
	{
		idx.push_back( tuple<long double,long long ,long long> ( (value[i]/capacity[i]) , capacity[i] , value[i] ) ) ;
	}
	sort(idx.begin(), idx.end());
	for (int i = 0; i < n; ++i)
	{
		//cout<<get<1>(idx[i])<<" "<<get<2>(idx[i])<<" ";
	}
	int i = 0;
	long long cost =0;
	while(min >= 0)
	{
		cost = cost + get<2>(idx[i]);
		min = min - get<1>(idx[i]);
		if ( (min - get<1>(idx[i]) ) > 0 )
		{
			cost = cost + get<2>(idx[i]);
			min = min - get<1>(idx[i]);
			//cout<<min<<" "<<get<1>(idx[i]);
			//cout<<endl;
		}
		else if (min<0)
			break;
		else
			i++;
	}
	cout<<cost;
	return 0;
}
