#include<stdio.h>

int main()
{
	float x,y;
	scanf("%f",&x);
	if(x<=110)y=0.5*x;
	else if(x>110&&x<=210)y=55+0.55*(x-110);
	else y=110+0.70*(x-210);
	printf("%.2f",y);
	return 0;
}
