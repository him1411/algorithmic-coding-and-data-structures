using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1] < v[i])
            {
                cout<<v[i+1]<<" ";
            }
            else
                cout<<"-1 ";
        }
        cout<<"-1"<<endl;
    }
	return 0;
}