#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long 
#define ll long long
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define INF 10000000000000007ll
#define MOD 1000000007ll
#define PI 3.14159265359
#define rev(A) reverse((A).begin(), (A).end())
#define sorv(A) sort((A).begin(), (A).end())

void calculate_primes(vector<int>& primes)
{
    primes[0]=0;
    primes[1]=0;
    for( int i=2;i<=32000;i++)
    {
        int j = i;
        int temp = j*i;
        while(temp <= 32000)
        {
            primes[temp] = 0;
            j++;
            temp = j*i;
        }
    }
}

int32_t main()
{
    IOS;
    vector<int> primes(32001,1); 
    calculate_primes(primes); 
    int cases;
    cin >> cases;
    for(int t=0;t<cases;t++)
    {
        int m,n,i,j;
        cin >> m >> n;
        vector<int> sieve(n-m+1,1); 
        for(i=2;i<=32000;i++)
        {
            if(primes[i]==1)
            {
                if(m%i == 0)
                	j = m/i;
                else
                    j = m/i + 1;
                
                if( j < i)
                	j = i;

                int temp = j*i;
                while(temp<=n)
                {
                    sieve[temp-m]=0;
                    j++;
                    temp = j*i;
                }
            }
        }

        if(m == 1)
        	sieve[0] = 0; 

        for(i=0;i<n-m+1;i++)
        {
            if(sieve[i]==1)
                cout<<m+i<<endl;
        }
        cout<<endl;
    }
    return 0;
}