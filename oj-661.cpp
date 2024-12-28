#include<stdio.h>

int main(){
	int n;
	int a[21];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int chu=0;
	for(int i=0;i<n;i++){
		chu=chu+a[i];
	}
	int max_i=-1;
	int max=-1000000000;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[i]>max){
				max=a[i];
				max_i=i;
			}
		}
	}
	printf("%d %d %d",chu,max,max_i);
	return 0;
}
