#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,q,x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	q=b*b-4*a*c;
	if(q>0)
		{ x1=(-b+sqrt(q))/(2.00*a),x2=(-b-sqrt(q))/(2.00*a);
			printf("%.1f %.1f",x1,x2);}
	else if(q==0)
		{  x1=-b/(2.00*a);
		printf("%.1f",x1);}
	else if(q<=0) 
	    {printf("no");}
	       
	return 0;
}
