#include<stdio.h>

int main()
{
	int n,sum,x,y,z,m,j,q,f,g,h;
	scanf("%d",&n);
	x=n/100000000;
	y=(n-100000000*x)/10000000;
	z=(n-100000000*x-10000000*y)/1000000;
	m=(n-100000000*x-10000000*y-1000000*z)/100000;
	j=(n-100000000*x-10000000*y-1000000*z-100000*m)/10000;
	q=(n-100000000*x-10000000*y-1000000*z-100000*m-10000*j)/1000;
	f=(n-100000000*x-10000000*y-1000000*z-100000*m-10000*j-1000*q)/100;
	g=(n-100000000*x-10000000*y-1000000*z-100000*m-10000*j-1000*q-100*f)/10;
	h=(n-100000000*x-10000000*y-1000000*z-100000*m-10000*j-1000*q-100*f-10*g);
	sum=x+y+z+m+j+q+f+g+h;
	printf("%d",sum);
	return 0;
}
