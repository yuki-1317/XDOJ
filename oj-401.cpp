#include<stdio.h>
#include<math.h>

int main()
{
	float x,y,z;
	scanf("%f",&x);
	if(x<=110){y=0.5*x;
	printf("%.2f A 0.00",y);
	}
	else if(x>110&&x<=210)
	{y=55+0.55*(x-110);
	z=x-110;
	printf("%.2f B %.2f",y,z);}
	
	else if (x>210&&x<400)
	{y=110+0.70*(x-210);
	z=x-210;
	printf("%.2f C %.2f",y,z);}
	else
	 {y=243+(x-400);
	 z=x-400;
	 printf("%.2f D %.2f",y,z);}
	
	return 0;
}
