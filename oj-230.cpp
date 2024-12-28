#include<stdio.h>

int found=0;
int judge(int n){
	int found=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			found=1;
		}
	}
	
	return found;
}

int main()
{
	int sum=0;
	int a[1024],n;
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(judge(i)==0){
			a[sum]=i;
			sum++;
		}
	}
	printf("%d\n",sum-1);
	for(int i=1;i<sum;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
