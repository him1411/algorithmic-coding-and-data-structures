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

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int i2=0,i3=0,i5=0,mul2=2,mul3=3,mul5=5;
        int next=1;
        arr[0]=1;
        for(int i=1;i<n;i++)
        {
            next = Min(mul2,mul3,mul5);
            arr[i] = next;
            if(next==mul2)
            {
                i2++;
                mul2 = arr[i2]*2;
            }
            if(next==mul3)
            {
                i3++;
                mul3 = arr[i3]*3;
            }
            if(next==mul5)
            {
                i5++;
                mul5 = arr[i5]*5;
            }
        }
        cout<<next<<endl;
    }
    return 0;
}