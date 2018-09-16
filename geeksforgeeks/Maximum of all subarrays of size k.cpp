using namespace std;
int main()
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
	    int mx = v[0];
	    for(int i=0;i<=n-k;i++)
	    {
	        mx = v[i];
	        for(int j=1;j<k;j++)
	        {
	            if(v[i+j] >  mx)
	            {
	                mx = v[i+j];
	            }
	        }
	        cout<<mx<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}