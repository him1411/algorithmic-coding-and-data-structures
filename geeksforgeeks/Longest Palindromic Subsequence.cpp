using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int n = str.size();
	    int l[n][n];
	    
	    for(int i=0;i<n;i++)
	    {
	        l[i][i]=1;
	    }
	    for(int cl=2;cl<=n;cl++)
	    {
	        for(int i=0;i<n-cl+1;i++)
	        {
	            int j=i+cl-1;
	            if(str[i]==str[j] && cl==2)
	                l[i][j]=2;
	            else if(str[i] == str[j])
	                l[i][j]=l[i+1][j-1]+2;
	            else
	                l[i][j]=max(l[i][j-1],l[i+1][j]);
	        }
	    }
	    cout<<l[0][n-1]<<endl;
	}
	return 0;
}