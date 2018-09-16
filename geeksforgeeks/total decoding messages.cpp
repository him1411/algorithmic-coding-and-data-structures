using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long 
#define ll long long
#define float long double
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

using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int ways[n+1];
        if(s[0] == '0')
        {
            cout << 0 << endl;
            continue;
        }
        ways[0] = 1;
        ways[1] = 1;
        bool breaker = false;
        for(int i = 2; i <= n && !breaker; i++)
        {
            if(s[i-1] == '0' && (s[i-2] != '2' && s[i-2] != '1'))
                breaker = true;
            else if(s[i-1] == '0')
                ways[i] = ways[i-2];
            else if(s[i-2] == '1' || (s[i-1] < '7' && s[i-2] == '2'))
                ways[i] = ways[i-1] + ways[i-2];
            else
                ways[i] = ways[i-1];
        }
        // for(int i = 1; i <= n; i++)
        //     cout << ways[i] << " ";
        // cout <<endl;
        if(breaker)
            cout << 0 << endl;
        else
            cout << ways[n] << endl;
    }
	return 0;
}