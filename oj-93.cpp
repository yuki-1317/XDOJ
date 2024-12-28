#include<stdio.h>

int main()
{
	int a,b,max,min,m,n;
	scanf("%d%d",&a,&b);
	if(a>b) max=a,min=b;
	else max=b,min=a;

m=max-max/10*10,n=min*min;
printf("%d %d",m,n);
	
	return 0;
}
