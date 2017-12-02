#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int s,n,m,max =0;
    cin >> s >> n >> m;
    vector<int> k(n);
    for(int i = 0; i<n; i++)
    {
       cin >> k[i];
    }
    vector<int> d(m);
    for(int i = 0; i < m; i++)
    {
       cin >> d[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if( (k[i]+d[j]) > max && (k[i]+d[j])<=s )
            {
                max = k[i]+d[j]; 
            }
        }
    }
    if (max==0)
    {
        max--;
    }
    cout << max;
    return 0;
}