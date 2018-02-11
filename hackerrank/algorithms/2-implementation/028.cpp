#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,e=100;
    cin >> n >> k;
    vector<int> c(n);
    for(int i = 0;i < n;i++)
    {
       cin >> c[i];
    }
    for (int i = 0; i < n; i=i+k)
    {
        if (c[i]==1)
        {e=e-3;}
        else
        {e--;}
    }
    cout<<e;
    return 0;
}