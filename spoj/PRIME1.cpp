#include <bits/stdc++.h>
using namespace std;

void mergeSort(int* array,int length){
	if(length==1){
		return ;
	}
	int mid=length/2;
	mergeSort(array,mid);
	mergeSort(array+mid,length-mid);

	int temp[length];
	memset(temp,0,sizeof(temp));
	int index=0,left=0,right=mid;

	while(left<mid && right<length){
		if(array[left]<=array[right]){
			temp[index]=array[left];
			left++;
			index++;
		}
		else{
			temp[index]=array[right];
			right++;
			index++;	
		}
	}

	while(left<mid){
		temp[index]=array[left];
		left++;
		index++;
	}
	while(right<length){
		temp[index]=array[right];
		right++;
		index++;
	}

	for(int i=0;i<length;i++){
		array[i]=temp[i];
	}
}
int main(){
	int num;
	scanf("%d",&num);
	int array[num];
	memset(array,0,sizeof(array));
	for(long long int i=0;i<num;i++){
		scanf("%d",&array[i]);
	}
	if(num<3){
		printf("-1\n");
	}
	else{
		mergeSort(array,num);
		if(array[num-1]>0 && array[num-2]>0 && array[num-3]>0){
			printf("%lld",(long long int)array[num-1]*(long long int)array[num-2]*(long long int)array[num-3]);
		}
	}
}