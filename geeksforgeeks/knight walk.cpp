using namespace std;
int dir[8][2] = {
  {1,2},{1,-2},{-1,2},{-1,-2},
  {2,1},{-2,1},{2,-1},{-2,-1}
};
int bfs(int n, int m, int sx, int sy,int dx, int dy){
    vector<vector<bool>> visited(n , vector<bool>(m,false));
    queue< pair< int , pair<int,int> > > q;
    pair< int , pair<int,int> > p;
    pair<int,int> dest = make_pair(dx,dy);
    q.push({0,{sx,sy}});
    while(!q.empty()){
        p = q.front();
        q.pop();
        if(p.second == dest) return p.first;
        for(int i = 0 ; i < 8 ; i++){
            int x = p.second.first + dir[i][0];
            int y = p.second.second + dir[i][1];
            if(x < 0 || y < 0 | x >=n || y >= m ) continue;
            if(!visited[x][y]){
                q.push({p.first+1,{x,y}});
                visited[x][y] = true;
            }
        }
        
    }
    return -1;
    
}
int main()
 {
	//code
	int t;
	cin >> t;
	int n,m,sx,sy,dx,dy;
	while(t--){
	    cin >> n >> m >> sx >> sy >> dx>> dy;
	    cout << bfs(n,m,sx-1,sy-1,dx-1,dy-1)<< endl;
	}
	return 0;
}