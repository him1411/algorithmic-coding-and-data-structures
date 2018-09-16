using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int nodes,edges;
	    cin>>nodes>>edges;
	    vector<vector<int>> adj(nodes);
	    for(int i=0;i<edges;i++)
	    {
	        int temp1,temp2;
	        cin>>temp1>>temp2;
	        adj[temp1].push_back(temp2);
	        adj[temp2].push_back(temp1);
	    }
	    for(int i=0;i<adj.size();i++)
	    {
	        cout<<i;
	        for(int j=0;j<adj[i].size();j++)
	        {
	            cout<<"-> "<<adj[i][j];
	        }
	        cout<<endl;
	    }
	}
	return 0;
}