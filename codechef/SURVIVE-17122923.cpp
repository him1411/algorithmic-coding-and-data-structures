#include <bits/stdc++.h>
using namespace std;    
     
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            long long n,k,s,curs=0,ans=0,p=0,lans=0;
            cin>>n>>k>>s;
     
            bool ch=1;
            for(int i=1;i<=s;i++)
            {
                if(i%7==0)
                {
                    if(curs<k)
                    {
                        for(int u=0;u<6-lans;u++)
                        {
                            curs+=n;ans++;
                            if(curs<k)
                                ;
                            else
                                break;
                        }
                    }
                    curs-=k;
                    ans+=lans;
                    if(curs<0)
                        ch=0;
                    lans=0;
                }
                else
                {
                    if(curs<k)
                    {
                        curs+=n-k;
                        if(curs<0)
                            ch=0;
                        lans++;
                    }
                    else
                        curs-=k;
                }
            }
            ans+=lans;
            if(ch)
                cout<<ans;
            else
                cout<<-1;
            cout<<endl;
        }
        return 0;
    }