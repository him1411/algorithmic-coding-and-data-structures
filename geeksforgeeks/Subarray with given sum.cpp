using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n>>sum;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int cursum=v[0],start=0;
        int flag =1;
        for(int i =1;i<=n;i++)
        {
            while(cursum > sum && start <i-1)
            {
                cursum -= v[start];
                start++;
            }
            
            if(cursum == sum)
            {
                cout<<start+1<<" "<<i<<endl;
                flag =0;
                break;
            }
            
            if(i<n)
                cursum += v[i];
        }
        if(flag)
            cout<<"-1"<<endl;
    }
	return 0;
}