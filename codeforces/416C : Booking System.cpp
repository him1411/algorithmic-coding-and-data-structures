#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
//#define int long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define mp make_pair
#define pb push_back

int main()
{
    int n;
    cin>>n;
    pair<int,pair<int,int>> reqs[n];
    int taken[n];

    for(int i=0; i<n; i++)
    {
        cin>>reqs[i].first>>reqs[i].second.first;
        reqs[i].second.second = i+1;
        taken[i] = 0;
    }
    
    int k, total = 0, ct = 0;
    cin>>k;
    pair<int,int> cap[k];
    for(int i=0; i<k; i++)
    {
        cin>>cap[i].first;
        cap[i].second = i;
    }
    sort(cap, cap+k);
    vector<pair<int,int>> ans;

    for(int i=0; i<k; i++)
    {
        int idx = -1, ma = -1;
        for(int j=0; j<n; j++)
        {
            if(!taken[j] && reqs[j].first <= cap[i].first && reqs[j].second.first > ma)
            {
                ma = reqs[j].second.first;
                idx = j;
            }
        }
        if(idx >= 0)
        {
            taken[idx] = 1;
            ans.pb(mp(idx+1,cap[i].second+1));
            total += ma;
            ct++;
        }
    }
    printf("%d %d\n",ct,total);
    for(int i=0; i<ct; i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}