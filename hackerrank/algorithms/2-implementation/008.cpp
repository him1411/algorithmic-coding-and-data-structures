#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,a[5]={0,0,0,0,0},result=0;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; i++)
    {
       cin >> ar[i];
        if(ar[i]==1)
        {a[0]++;}
        if(ar[i]==2)
        {a[1]++;}
        if(ar[i]==3)
        {a[2]++;}
        if(ar[i]==4)
        {a[3]++;}
        if(ar[i]==5)
        {a[4]++;}
    }
    if ( (a[0]>=a[1]) && (a[0]>=a[2]) && (a[0]>=a[3]) && (a[0]>=a[4]) )
    {
        result=1;
    }
        
    if ( (a[1]>a[0]) && (a[1]>=a[2]) && (a[1]>=a[3]) && (a[1]>=a[4]) )
    {
        result=2;
    }
              
    if ( (a[2]>a[0]) && (a[2]>a[1]) && (a[2]>=a[3]) && (a[3]>=a[4]) )
    {
        result=3;
    }
                            
    if ( (a[3]>a[0]) && (a[3]>a[1]) && (a[3]>a[2]) && (a[3]>=a[4]) )
    {
        result=4;
    }                           

    if ( (a[4]>a[0]) && (a[4]>a[1]) && (a[4]>a[2]) && (a[4]>a[3]) )
    {
        result=5;
    }
 cout << result << endl;
 return 0;
}
