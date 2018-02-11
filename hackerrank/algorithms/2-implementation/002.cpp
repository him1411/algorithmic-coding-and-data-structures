//https://www.hackerrank.com/challenges/apple-and-orange/problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,a,b,m,n,ma=0,mb=0;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    vector<int> apple(m);
    for(int i = 0;i < m;i++)
    {
       cin >> apple[i];
       apple[i] += a;  
    }
    vector<int> orange(n);
    for(int i = 0;i < n;i++)
    {
       cin >> orange[i];
       orange[i] += b;
    }
    for(int i = 0;i < m;i++)
    {
       if (apple[i]>=s && apple[i]<=t)
       {ma++;}
    }
    for(int i = 0;i < n;i++)
    {
       if (orange[i]>=s && orange[i]<=t)
       {mb++;}
    }
    cout<<ma<<endl<<mb;
    return 0;
}
