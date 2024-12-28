#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,q,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	q=b*b-4*a*c;
	if(q>0)
		{ x1=(-b+sqrt(q))/(2.00*a),x2=(-b-sqrt(q))/(2.00*a);
			printf("%.2f %.2f",x1,x2);}
	else if(q==0)
		{  x1=-b/(2.00*a);
		printf("%.2f",x1);}
	else if(q<=0) 
	    {printf("No real root");}
	       
	return 0;
}
