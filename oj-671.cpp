#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[1024];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x,p,sum=0;
	for(int i=0;i<n;i++){
		sum=sum+a[i];
	}
	x=sum/n;
	int sum1=0;
	for(int i=0;i<n;i++){
		sum1=sum1+(a[i]-x)*(a[i]-x);
	}
	p=sum1/n;
	printf("%d",p);
	return 0;
}
