#include<stdio.h>

int main()
{
	int sum,m,n,q,r,x,y;
	scanf("%d",&sum);
	m=sum/100;
	n=(sum-100*m)/50;
	q=(sum-100*m-50*n)/20;
	r=(sum-100*m-50*n-20*q)/10;
	x=(sum-100*m-50*n-20*q-10*r)/5;
	y=(sum-100*m-50*n-20*q-10*r-5*x)/1;
	printf("%d %d %d %d %d %d",m,n,q,r,x,y);
		return 0;
}
