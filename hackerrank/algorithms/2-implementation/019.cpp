#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++)
    {
       cin >> height[height_i];
    }
    sort(height.begin(),height.end(), greater<int>());
    if (k>=height[0])
    {
    	cout<<"0";
    }
    else
    {
    	cout<<(height[0]-k);
    }
    return 0;
}