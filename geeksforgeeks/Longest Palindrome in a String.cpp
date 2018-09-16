using namespace std;

void printSubStr(string str, int low, int high)
{
    for( int i = low; i <= high; ++i )
        printf("%c", str[i]);
        
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
	    int maxlen =1;
	    int start =0;
	    int len = str.size();
	    int low,high;
	    for(int i=1;i<len;i++)
	    {
	        low = i-1;
	        high=i;
	        while(low>=0 && high<len &&str[low]==str[high] )
	        {
	            if(high-low+1 > maxlen)
	            {
	                start = low;
	                maxlen = high-low+1;
	            }
	            low--;
	            high++;
	        }
	        low = i-1;
	        high= i+1;
	        while(low>=0 && high<len &&str[low]==str[high])
	        {
	            if(high-low+1 > maxlen)
	            {
	                start = low;
	                maxlen = high -low +1;
	            }
	            low--;
	            high++;
	        }
	    }
	    printSubStr(str, start, start + maxlen-1);
	}
	return 0;
}