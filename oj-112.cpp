#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	scanf("%f",&x);
	if(x>=0)y=sqrt(x);
	else y=(x+1)*(x+1)+2*x+1.000/x;
	printf("%.2f",y);
	return 0;
}
