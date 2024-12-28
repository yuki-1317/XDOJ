#include<stdio.h>
int main()
{
	float x,y;
	scanf("%f",&x);
	if(x<=3000){y=0.005*x;
	printf("%.1f",y);
	}
	else if(x>3000&&x<=5000)
	{y=0.01*x;
	
	printf("%.1f",y);}
	
	else if (x>5000&&x<=10000)
	{y=0.015*x;
	
	printf("%.1f",y);}
	else
	 {y=0.02*x;
	 
	 printf("%.1f",y);}
	
	return 0;}
