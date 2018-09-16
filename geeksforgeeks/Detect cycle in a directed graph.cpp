
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of the class is as follows 
which contains an integer V denoting the no 
of vertices and a list of adjacency vertices.
class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};
*/
/*You are required to complete this method*/
bool isCycleUtil(int s, list<int>* adj, int v, vector<bool>& vis, vector<bool>& recStack)
{
    if(vis[s] == false)
    {
        vis[s] = true;
        recStack[s] = true;
        for(auto& iter : adj[s])
        {
            if((not vis[iter] and isCycleUtil(iter, adj, v, vis, recStack)))
            {
                return true;
            } 
            else if((recStack[iter] == true))
            {
                return true;
            }
        }
    }
    recStack[s] = false;
    return false;
}

bool Graph :: isCyclic()
{
    vector<bool> recStack(V+1, false);
    vector<bool> visited(V+1, false);
    for(int i = 0; i < V; ++i)
    {
        if(isCycleUtil(i, adj, V, visited, recStack))
            return true;
    }
    return false;
}