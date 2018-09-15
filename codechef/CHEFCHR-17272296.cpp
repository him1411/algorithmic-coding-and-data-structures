#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(w,x,y,z) max(max(w,x),max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define ll long long
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl

int countFreq(string pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
    for (int i = 0; i <= N - M; i++)
    { 
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;
  
        if (j == M)  
        {
           res++;
           j = 0;
        }
    }
    return res;
}

int32_t main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int count =0,x;
		string str;
		cin>>str;
		x=str.find("cefh");
		if(x!=-1)
			count = count + countFreq("cefh",str);

		x=str.find("cehf");
		if(x!=-1)
			count = count + countFreq("cehf",str);

		x=str.find("cfeh");
		if(x!=-1)
			count = count + countFreq("cfeh",str);

		x=str.find("cfhe");
		if(x!=-1)
			count = count + countFreq("cfhe",str);

		x=str.find("chef");
		if(x!=-1)
			count = count + countFreq("chef",str);

		x=str.find("chfe");
		if(x!=-1)
			count = count + countFreq("chfe",str);


		x=str.find("ecfh");
		if(x!=-1)
			count = count + countFreq("ecfh",str);

		x=str.find("echf");
		if(x!=-1)
			count = count + countFreq("echf",str);

		x=str.find("efch");
		if(x!=-1)
			count = count + countFreq("efch",str);

		x=str.find("efhc");
		if(x!=-1)
			count = count + countFreq("efhc",str);

		x=str.find("ehcf");
		if(x!=-1)
			count = count + countFreq("ehcf",str);

		x=str.find("ehfc");
		if(x!=-1)
			count = count + countFreq("ehfc",str);


		x=str.find("fceh");
		if(x!=-1)
			count = count + countFreq("fceh",str);

		x=str.find("fche");
		if(x!=-1)
			count = count + countFreq("fche",str);

		x=str.find("fech");
		if(x!=-1)
			count = count + countFreq("fech",str);

		x=str.find("fehc");
		if(x!=-1)
			count = count + countFreq("fehc",str);

		x=str.find("fhce");
		if(x!=-1)
			count = count + countFreq("fhce",str);

		x=str.find("fhec");
		if(x!=-1)
			count = count + countFreq("fhec",str);


		x=str.find("hcef");
		if(x!=-1)
			count = count + countFreq("hcef",str);

		x=str.find("hcfe");
		if(x!=-1)
			count = count + countFreq("hcfe",str);

		x=str.find("hecf");
		if(x!=-1)
			count = count + countFreq("hecf",str);

		x=str.find("hefc");
		if(x!=-1)
			count = count + countFreq("hefc",str);

		x=str.find("hfce");
		if(x!=-1)
			count = count + countFreq("hfce",str);

		x=str.find("hfec");
		if(x!=-1)
			count = count + countFreq("hfec",str);

		if (count ==0 )
		{
			cout<<"normal"<<endl;
		}
		else
			cout<<"lovely "<<count<<endl;
	}
	return 0;
}