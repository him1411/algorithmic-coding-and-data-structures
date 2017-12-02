#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector <int> v) 
{
	int count =0;
	std::sort(v.begin(), v.end(), std::greater<int>());
	for (int i = v.size()-1; i >= 0 ; i--)
	{

		if (v[i]==v[i-1])
		{
			count++;
			i--;
		}
		
	}
	cout<<count;
	return 0;
}

int main() 
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    //cout << result << endl;
    return 0;
}