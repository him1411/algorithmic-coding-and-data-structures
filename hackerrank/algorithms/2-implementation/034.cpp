#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,cut=0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++)
    { cin >> a[i]; }
	
	long min=0;
	while(a.size()>=1)
	{
		cut=0;
		min=a[0];
		for(int j = 0;j < a.size();j++)
		{
			if (a[j]<=min && a[j]!=0)
				{min=a[j];}
		}
		for (int i = 0; i < a.size(); i++)
	 	{
	 		cut++;
			a[i]=a[i]-min;
			for (int k = 0; k < a.size(); k++)
	 		{
	 			if (a[k]==0)
	 			{	
	 				auto it = a.begin() + k;
					std::rotate(it, it + 1, a.end());
					a.pop_back();
					i--;
				}
	 		}			
		}
		/*for (int l = 0; l < a.size(); l++)
		{cout<<a[l]<<" ";}*/
		cout<<cut<<endl;
	}
 	return 0;
}