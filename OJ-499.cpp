#include<stdio.h>

int main()
{
	int t;
	float a,b;
	scanf("%d",&t);
	a=0.6*t;
	b=50+0.4*t;
	printf("%.2f\n%.2f\n",a,b);
	if(a>=b){
		printf("B");
	}else{
	printf("A");
	}
	return 0;
}
