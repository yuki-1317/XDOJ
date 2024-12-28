#include<stdio.h>

int main()
{
	int m;
	int sum=0;
	scanf("%d",&m);
	int a[9];
	for(int i=0;i<9;i++){
		a[i]=m-m/10*10;
		m=m/10;
	}
	for(int i=0;i<9;i++){
		sum=a[i]+sum;
	}
	printf("%d",sum);
	return 0;
}
