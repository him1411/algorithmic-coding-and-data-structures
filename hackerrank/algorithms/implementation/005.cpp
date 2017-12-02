//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
#include <bits/stdc++.h>
using namespace std;

int getRecord(int *s, int n )
{   
    int high=s[0],low=s[0],up=0,dn=0;
    for(int i =0.;i<n;i++)
    {
        if(s[i]>high)
            {
                high=s[i];
                up++;
            }
        if(s[i]<low)
        {
            low=s[i];
            dn++;
        }
    }
    cout<<up<<endl<<dn;
}

int main() 
{
    int n;
    cin >> n;
    int s[n];
    for(int i = 0; i < n; i++)
    {
       cin >> s[i];
    }
    int k = getRecord(s,n);
   
    return 0;
}
