#include<stdio.h>
#include<math.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	float l,d,p;
	l=a+sqrt(a*b+1);
	d=a*(l+b)*(l+b);
	p=d*l+b*b;
	printf("CL=%.2f tD=%.2f SP=%.2f",l,d,p);
	return 0;
}
