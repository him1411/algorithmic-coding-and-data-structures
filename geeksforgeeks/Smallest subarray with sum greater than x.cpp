using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {cin>>v[i];}
        //sort(v.rbegin(),v.rend());
        int currsum =0,end=0,start=0,minlen=n;
        while(end<n)
        {
            while(currsum <=k && end<n)
                currsum += v[end++];
                
            while(currsum >k && start<n)
            {
                if(end-start <minlen)
                    minlen = end-start;
                    
                currsum = currsum-v[start++];
            }
        }
        cout<<minlen<<endl;
    }
    return 0;
}