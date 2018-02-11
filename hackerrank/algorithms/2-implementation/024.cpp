#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=5,ppl,tppl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ppl=(m/2);
        tppl=tppl+ppl;
        m=ppl*3;
    }
    cout<<tppl;
    return 0;
}