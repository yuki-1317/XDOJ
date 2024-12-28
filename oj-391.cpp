#include<stdio.h>

int fib(int n){
	int a[1024]={1,1};
	for(int i=0;i<n;i++){
		a[i+2]=a[i+1]+a[i];
	}
	return a[n+1];
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d ",fib(i-1));
	}
	return 0;
}
