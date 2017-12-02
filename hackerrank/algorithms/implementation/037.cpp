#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> c(n);
    int j;
    for(int i = 0;i < n;i++)
    {cin >> c[i];}
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(c[i+2])
        {
            
            count++;
        }
        else
        {
            i++;
            count++;
        }
    }
    cout<<count;
    return 0;
}
