using namespace std;

struct point
{
    int x,y;
};

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    point l1,r1,l2,r2;
	    cin>>l1.x>>l1.y>>r1.x>>r1.y;
	    cin>>l2.x>>l2.y>>r2.x>>r2.y;
	    
	    if(l1.x > r2.x || l2.x >r1.x)
	        cout<<"0"<<endl;
	    else if(l1.y < r2.y || l2.y < r1.y)
	        cout<<"0"<<endl;
	    else
	        cout<<"1"<<endl;
	}
	return 0;
}