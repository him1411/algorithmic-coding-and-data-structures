using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        string s1,s2;
        cin>>s1>>s2;
        int l[m+1][n+1];
        
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                {
                    l[i][j]=0;
                }
                else if(s1[i-1] == s2[j-1])
                    l[i][j] = l[i-1][j-1]+1;
                    
                else
                    l[i][j] = max(l[i-1][j],l[i][j-1]);
            }
        }
        cout<<l[m][n]<<endl;
    }
	return 0;
}