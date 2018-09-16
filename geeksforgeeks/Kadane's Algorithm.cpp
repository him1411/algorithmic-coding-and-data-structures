using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v(n,0);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    int max= INT_MIN,currmax=0;
	    for(int i=0;i<n;i++)
	    {
	        currmax += v[i];
	        if(max<currmax)
	            max = currmax;
	        
	        if(currmax<0)
	            currmax=0;
	    }
	    
	    cout<<max<<endl;
	}
	return 0;
}