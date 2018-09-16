#define int long long
using namespace std;
int32_t main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int p=1;
        int ans=0;
        for(int start=0,end=0;end<n;end++)
        {
            p=p*v[end];
            while(start<end && p>k)
            {
                p = p/v[start++];
            }
            if(p<k)
            {
                int len = end-start+1;
                ans += len;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}