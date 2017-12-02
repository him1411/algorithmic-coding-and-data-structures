#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long n, k,sum=0;
    double an=0;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
       cin >> a[i];
       if(i!=k)
        {
            an=an+a[i];
        }
    }
    an=an/2;
    double b;
    cin >> b;
    if (an==b)
    {
        cout<<"Bon Appetit";
    }
    else
    {
        cout << b-an << endl;
    }
    return 0;
}
