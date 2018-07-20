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

struct order
{
	int p,q;
};

bool comp(order o1,order o2) 
{
	return o1.p>o2.p;
}

bool comps(order o1,order o2) 
{
	return o1.p<o2.p;
}

int32_t main()
{
    IOS;
    int n,s,sb,ss,asellsize=0,abuysize=0;
    order ob[1005],os[1005],oaggb[1005],oaggs[1005];
    cin>>n>>s;
    sb=0;ss=0;
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        if(ch=='B') 
    	{
    		cin>>ob[sb].p>>ob[sb].q;
    	    sb++;
    	}
        else if(ch=='S') 
        {
        	cin>>os[ss].p>>os[ss].q;
        	ss++;
        }
    }
    sort(ob,ob+sb,comp);
    sort(os,os+ss,comps);
    int aggs=os[0].p,aggb=ob[0].p,aggq=0;

    for(int i=0;i<ss;i++)
    {
        if(os[i].p==aggs) 
        	aggq+=os[i].q;
        else
        {
            order o1={aggs,aggq};
            oaggs[asellsize]=o1;asellsize++;
            aggq=os[i].q;
            aggs=os[i].p;
        }
    }
    order o1={aggs,aggq}; oaggs[asellsize]=o1;asellsize++;
    aggq=0;
    for(int i=0;i<sb;i++)
    {
        if(ob[i].p==aggb) 
        	aggq+=ob[i].q;
        else
        {
            order o1={aggb,aggq};
            oaggb[abuysize]=o1;abuysize++;
            aggq=ob[i].q;
            aggb=ob[i].p;
        }
    }
    order o2={aggb,aggq};oaggb[abuysize]=o2;abuysize++;
    int sss=s,ssb=s;
    if(sss>asellsize) 
    	sss=asellsize;
    if(ssb>abuysize) 
    	ssb=abuysize;
    if(ss!=0) 
    {
    	for(int i=0;i<sss;i++) 
    	{
    		cout<<"S "<<oaggs[sss-i-1].p<<" "<<oaggs[sss-i-1].q<<endl;
    	}
    }
    if(sb!=0) 
    {
    	for(int i=0;i<ssb;i++) 
    	{
    		cout<<"B "<<oaggb[i].p<<" "<<oaggb[i].q<<endl;
    	}
    }
    return 0;
}