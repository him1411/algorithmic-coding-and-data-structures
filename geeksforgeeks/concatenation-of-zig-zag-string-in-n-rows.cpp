using namespace std;

void zigzag(string str,int n)
{
    if(n==1)
    {
        cout<<str<<endl;
        return;
    }
    int len = str.size();
    string arr[n];
    int row =0;
    bool down;
    for(int i=0;i<len;i++)
    {
        arr[row].push_back(str[i]);
        if(row==n-1)
            down=false;
        else if(row==0)
            down=true;
            
        (down)? (row++) : (row--);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int n;
	    cin>>n;
	    zigzag(str,n);
	}
	return 0;
}