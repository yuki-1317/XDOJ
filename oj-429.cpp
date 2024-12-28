#include<stdio.h>

int main()
{
	float x,y;
	scanf("%f",&x);
	if(x<=100000)y=0.1*x;
	else if(x>100000&&x<=200000)y=10000+(x-100000)*0.075;
	else if(x>200000&&x<=400000)y=17500+(x-200000)*0.05;
	else if(x>400000&&x<=800000)y=27500+(x-400000)*0.03;
	else y=39500+(x-800000)*0.01;
	printf("%.1f",y);
	return 0;
}
