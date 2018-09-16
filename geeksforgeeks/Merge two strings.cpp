#define int long long 
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        string s3 ="";
        int i;
        for(i=0;i< min(s1.size(),s2.size());i++) 
        {
            s3.push_back(s1[i]);
            s3.push_back(s2[i]);
        }
        
        if(i<s1.size())
        {
            s3 = s3 + s1.substr(i,s1.size());
        }
        else if(i<s2.size())
        {
            s3 = s3 + s2.substr(i,s2.size());
        }
        cout<<s3<<endl;
    }
	return 0;
}