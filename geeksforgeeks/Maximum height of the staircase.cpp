using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = (sqrt(8*n +1)-1 )/2;
        cout<<ans<<endl;
    }
    return 0;
}