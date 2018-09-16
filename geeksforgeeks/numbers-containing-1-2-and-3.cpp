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

bool checknum(int t)
{
    int count =0;
    int size=0;
    int temp = t;
    while(temp>0)
    {
        int temp2 = temp %10;
        if(temp2==1||temp2==2||temp2==3)
        {
            count++;
        }
        
        temp = temp/10;
        size++;
    }
    //trace2(count,size);
    if(count ==size)
        return true;
        
    else
        return false;
}
int32_t main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(checknum(temp)==true)
            {
                v.push_back(temp);
            }
        }
        
        sort(v.begin(),v.end());
        if(v.size()==0)
        {
            cout<<"-1";
        }
        else
        {
            for(int i=0;i<v.size();i++)
            {cout<<v[i]<<" ";}
        }
        cout<<endl;
    }
    return 0;
}