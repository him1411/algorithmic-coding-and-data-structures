using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    map<int,int> m1,m2;
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        m1[temp]++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        m2[temp]++;
	    }
	    if(m1==m2)
	    {
	        cout<<1<<endl;
	    }
	    else
	        cout<<0<<endl;
	}
	return 0;
}