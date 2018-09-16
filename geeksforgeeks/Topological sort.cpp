
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* You need to complete this function */
void topo(vector<int> g[],vector<int> &vis,int n,stack<int> &s)
{
    vis[n]=true;
    for(int i=0;i<g[n].size();i++)
    {
        if(vis[g[n][i]]==false)
        {
             topo(g,vis,g[n][i],s);
        }
    }
    s.push(n);
}

int * topoSort(vector<int> g[], int N)
{
    vector<int>vis(N,0);
    stack<int> s;
    for(int i=0;i<N;i++)
    {
        if(vis[i]==false)
        {
            topo(g,vis,i,s);
        }
    }
     int *arr = new int[N];
    int i=0;
    while(!s.empty())
    {
        arr[i]=s.top();
        i++;
        s.pop();
    }
    return(arr);
    
    

}