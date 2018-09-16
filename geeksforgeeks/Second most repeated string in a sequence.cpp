#define int long long
using namespace std;
int32_t main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int> m1;
        for(int i=0;i<n;i++)
        {
            string temp;
            cin>>temp;
            m1[temp]++;
        }
        vector<pair<int,string>> v;
        for(auto i= m1.begin();i!=m1.end();i++)
        {
            string temp1 = i->first;
            int temp2 = i->second;
            v.push_back(make_pair(temp2,temp1));
        }
        sort(v.rbegin(),v.rend());
        cout<<v[1].second<<endl;
    }
    return 0;
}