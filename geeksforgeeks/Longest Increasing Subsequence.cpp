using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    vector<int> list(n,1);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(v[i] > v[j]  && list[i] < list[j]+1)
	                list[i] = list[j]+1;
	        }
	    }
	    
	    int max=0;
	    for(int i=0;i<n;i++)
	    {
	        if(max<list[i])
	            max=list[i];
	    }
	    cout<<max<<endl;
	}
	return 0;
}