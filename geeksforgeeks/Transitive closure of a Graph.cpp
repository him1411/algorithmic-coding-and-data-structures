using namespace std;
void dfs(vector<int> graph[],int adj[][1000],int i,int k,int visited[])
{
    visited[i]=1;
    for(int x=0;x<graph[i].size();x++)
    {
        if(!visited[graph[i][x]])
        {
            adj[k][graph[i][x]]=1;
            dfs(graph,adj,graph[i][x],k,visited);
           
        }
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	int v;
	cin>>v;
	int adj[1000][1000];
	vector<int > graph[v];
	int visited[v]={0};
	for(int i=0;i<v;i++)
	{
	    for(int j=0;j<v;j++)
	    {
	        cin>>adj[i][j];
	        if(i==j)
	        {
	            adj[i][j]=1;
	        }
	        if(adj[i][j]==1)
	        {
	            graph[i].push_back(j);
	        }
	    }
	}
	for(int i=0;i<v;i++)
	{
	    dfs(graph,adj,i,i,visited);
	    memset(visited,0,sizeof(visited));
	}
	for(int i=0;i<v;i++)
	{
	    for(int j=0;j<v;j++)
	    {
	        cout<<adj[i][j]<<" ";
	    }
	}
	cout<<endl;
	}
	return 0;
}