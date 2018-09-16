using namespace std;
#define ll long long int
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define _cin ios_base::sync_with_stdio(0);  cin.tie(0);
#define all(x) (x).begin(), (x).end()

#define INF 2147483647
#define MAXN 100004

ll mod = 1000000007;

ll dp[104][104][104], fact[304];

ll power(ll x, ll y)
{
	ll res = 1;
	while(y > 0){
		if(y & 1) res = (res * x) % mod;
		x = (x * x) % mod;
		y = y / 2;
	}
	return res;
}

ll findCount(ll x, ll y, ll z)
{
	ll num = fact[x+y+z];
	ll denum = (((fact[x] * fact[y]) % mod) * fact[z]) % mod;
	return (num * power(denum, mod-2)) % mod;
}

void init()
{
	fact[0] = 1;
	for(ll i=1; i<=300; i++) fact[i] = (fact[i-1] * i) % mod;
	ll a, b, c;
	dp[0][0][0] = 0;
	for(int i=0; i<=100; i++){
		for(int j=0; j<=100; j++){
			for(int k=0; k<=100; k++){
				if(i == 0 && j == 0 && k == 0) continue;
				a = b = c = 0;
				if(i != 0) 
					a = (10*dp[i-1][j][k] + 4*findCount(i-1, j, k)) % mod;
				if(j != 0)
					b = (10*dp[i][j-1][k] + 5*findCount(i, j-1, k)) % mod;
				if(k != 0)
					c = (10*dp[i][j][k-1] + 6*findCount(i, j, k-1)) % mod;
				dp[i][j][k] = (a + b + c) % mod;
			}
		}
	}	
}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
    	ll x, y, z;
    	cin >> x >> y >> z;
    	ll ans = 0;
    	for(int i=0; i<=x; i++)
    	{
    		for(int j=0; j<=y; j++)
    		{
    			for(int k=0; k<=z; k++)
    			{
    				ans = (ans + dp[i][j][k]) % mod;
    			}
    		}
    	}
    	cout << ans << endl;
    }
    return 0;
}