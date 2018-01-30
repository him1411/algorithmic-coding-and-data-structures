#include <bits/stdc++.h>
 using namespace std;    
    int32_t main()
    {
       
        int t;
        cin>>t;
        while(t--)
        {
            long long k,n1,n2;
            cin>>k>>n1>>n2;
            vector<long> v(100);
            v[0]=n1;
            v[1]=n2;
            long long ps=(n1+n2)%10;
            long long i=2;
            long long f=(n1+n2)%3;
            while(1 && i<k)
            {
                v[3]=(ps)%10;
                ps=ps+v[3];
    
                if(v[3]==2 || v[3]==0)
                    break;
                f=f+v[3];
                f%=3;
                i++;
                assert(i<=100);
            }
            if(v[3]==2)
            {
            long long d=i;
          
            long long left=k-d;
            long long tt=(left%4);
            f=(f+(left/4)*2)%3;
            for(int j=0;j<tt;j++)
            {
                if(j==0)
                    f+=2;
                if(j==1)
                    f+=4;
                if(j==2)
                    f+=8;
                if(j==3)
                    f+=6;
            }
            }
            f=f%3;
            if(f%3==0)
                cout<<"YES";
            else
                cout<<"NO";;
            
     
            cout<<endl;
            
        }
        return 0;
    } 