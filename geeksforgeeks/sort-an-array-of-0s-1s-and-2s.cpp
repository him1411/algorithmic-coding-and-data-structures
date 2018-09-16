using namespace std;
int main()
 {
	int t;
	cin>>t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v(3,0);
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        v[temp]++;
	    }
	    for(int i=0 ;i<v[0];i++)
	    {
	        cout<<"0 ";
	    }
	    for(int i=0 ;i<v[1];i++)
	    {
	        cout<<"1 ";
	    }
	    for(int i=0 ;i<v[2];i++)
	    {
	        cout<<"2 ";
	    }
	    cout<<endl;
	}
	return 0;
}