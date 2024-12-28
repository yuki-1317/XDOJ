#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	int sum=0;
	while(a>0){
		sum=sum+a%10;
		a=a/10;
	}
	printf("%d",sum);
	return 0;
}
