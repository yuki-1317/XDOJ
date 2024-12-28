#include<stdio.h>

int main()
{int sum,x,y,z,w,t;
	scanf("%d",&sum);
	x=sum/10000;
	y=(sum-10000*x)/1000;
	z=(sum-10000*x-1000*y)/100;
	w=(sum-10000*x-1000*y-100*z)/10;
	t=(sum-10000*x-1000*y-100*z-10*w)/1;
	printf("%d %d %d %d %d",x,y,z,w,t);
	return 0;
}
