#include<stdio.h>

int floor(int n){
	int sum=0;
	for(int i=0;i<10;i++){
		sum=n%10+sum;
		n=n/10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d",&n);
	int sum=floor(n);
	if(sum/10!=0){
		sum=floor(sum);
	}
	if(sum/10==0){
		printf("%d",sum);
	} 
	
	return 0;
}
