using namespace std;
int main()
 {
    int t;
    cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    string limiter = ".";
	    int pos =0;
	    string token;
	    vector<string>v;
	    while((pos=str.find(limiter)) != string::npos)
	    {
	        token = str.substr(0,pos);
	        v.push_back(token);
	        str.erase(0,pos+limiter.length());
	        token ="";
	    }
	    v.push_back(str);
	    reverse(v.begin(),v.end());
	    for(int i=0;i<v.size()-1;i++)
	    {
	        cout<<v[i]<<".";
	    }
	    cout<<v[v.size()-1]<<endl;
	}
	return 0;
}