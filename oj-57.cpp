#include<stdio.h>
int a[1024]={7,11};
int fib(int n){
	for(int i=2;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	return a[n];
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fib(n));
	return 0;
}
