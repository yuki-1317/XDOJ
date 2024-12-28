#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int m=(a+b)*(a+b);
	int n=(a-b)*(a-b);
	int p=a*a+b*b;
	int q=a*a-b*b;
int max=m;
	    if(n>max)max=n;
        if(p>max)max=p;
        if(q>max)max=q;
int	min=m;
		if(n<min)min=n;
		 if(p<min)min=p;
	 if(q<min)min=q;
	printf("%d %d",max,min);
	
	return 0;
}
