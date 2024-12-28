#include<stdio.h>

int main(){
	unsigned int n;
	int max=-1;
	int min=10;
	int m=0;
	int arr[10000];
	scanf("%d",&n);
	while(n!=0){
		arr[m]=n%10;
		if(arr[m]>max){
			max=arr[m];
		}
		if(arr[m]<min){
			min=arr[m];
		}
		m++;
		n=n/10;
	}
	printf("%d %d",max,min);
	return 0;
}
