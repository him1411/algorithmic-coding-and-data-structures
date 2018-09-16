using namespace std;

bool compare(string x, string y)
{
    string xy = x.append(y);
    string yx = y.append(x);
    
    return xy.compare(yx) > 0 ? true:false;
}

int main()
{
    int t;
    cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<string> v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end(),compare);
	    for(int i=0;i<n;i++)
	    {
	        cout<<v[i];
	    }
	    cout<<endl;
	}
	return 0;
}