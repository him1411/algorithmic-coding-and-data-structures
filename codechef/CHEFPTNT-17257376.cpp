#include <iostream>
#include <string>
using namespace std;
 
int find_emp_type(int K,string str, int *num_of_even, int *num_of_odd)
{
	for(int i=0;i<K;i++)
	{
		if(str[i]=='E') (*num_of_even)++;
		else (*num_of_odd)++;
	}
	return 0;
}
 
int result(int N, int M, int X, int num_of_even, int num_of_odd)
{
	if(X==0) {cout<<"no\n"; return 0;}
	for(int i=1;i<=M;i++)
	{
		if(i%2!=0)
		{
			if(num_of_odd>=X)
			{
				num_of_odd = num_of_odd - X;
				N = N - X;
			}
			else if(num_of_odd!=0)
			{
				N = N - num_of_odd;
				num_of_odd = 0;
			}
		}
		else
		{
			if(num_of_even>=X)
			{
				num_of_even = num_of_even - X;
				N = N - X;
			}
			else if(num_of_even!=0)
			{
				N = N - num_of_even;
				num_of_even = 0;
			}
		}
	}
	if(N<=0) cout<<"yes\n";
	else cout<<"no\n";
	
	return 0;
}
 
int main()
{
	int T,N,M,X,K;
	string str;
	int num_of_even=0, num_of_odd=0;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		num_of_even = 0;
		num_of_odd = 0;
		cin>>N>>M>>X>>K;		
		cin>>str;
		find_emp_type(K,str,&num_of_even,&num_of_odd);
		result(N,M,X,num_of_even,num_of_odd);
	}
	
	return 0;
}