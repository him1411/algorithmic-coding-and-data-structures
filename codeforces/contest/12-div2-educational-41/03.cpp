#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define int long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl

int cost[5][3];
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    char boards[5][n+1][n+1];
    for (int i = 1; i <=4; ++i)
    {
        cost[i][1]=0;
        cost[i][2]=0;
        for (int j = 1; j <= n; ++j)
        {
            for (int k = 1; k <=n; ++k)
            {
                cin >> boards[i][j][k];
            }
        }
    }
    for(int u=1;u<=2;u++)
    {
        char ch;
        if(u==1)
            ch='0';
        else
            ch='1';
        for(int i=1;i<=4;i++)
        {
            if(ch=='0')
                ch='1';
            else
                ch='0';
            for(int j=1;j<=n;j++)
            {
                for(int k =1;k<=n;k++)
                {
                    if(boards[i][j][k]!=ch)
                        cost[i][u]++;
                    if(ch=='0')
                        ch='1';
                    else
                        ch='0';
                }
            }
        }
    }

    int minim=INT_MAX;
    minim=min(minim,cost[1][1]+cost[2][1]+cost[3][2]+cost[4][2]);
    minim=min(minim,cost[1][1]+cost[2][2]+cost[3][1]+cost[4][2]);
    minim=min(minim,cost[1][1]+cost[2][2]+cost[3][2]+cost[4][1]);
    minim=min(minim,cost[1][2]+cost[2][1]+cost[3][1]+cost[4][2]);
    minim=min(minim,cost[1][2]+cost[2][1]+cost[3][2]+cost[4][1]);
    minim=min(minim,cost[1][2]+cost[2][2]+cost[3][1]+cost[4][1]);
    cout << minim;
}