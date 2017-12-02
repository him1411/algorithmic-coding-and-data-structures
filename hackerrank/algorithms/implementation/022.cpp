#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,j=0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        j=0;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0;i < n;i++)
        {
           cin >> a[i];
           if (a[i]<=0)
           {
               j++;
           }
        }
        if (j<k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;;
        }
    }
    return 0;
}
