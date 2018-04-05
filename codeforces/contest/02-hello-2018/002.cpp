#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],b[n],c[n];
	int i =0;
	for(i=0;i<n;i++){
		a[i] = 0;
		b[i] = 0;
		c[i] = 0;
	}
	for(i=1;i<n;i++){
		int x;
		cin>>x;
		a[i] = x-1;
		b[x-1]++;
	}
	for(i=0;i<n;i++){
		if(b[i] ==0){
			c[a[i]]++;
		}
	}
	int flag = 0;
	for(i=0;i<n;i++){
		if(c[i] !=0 &&c[i]<3){
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}