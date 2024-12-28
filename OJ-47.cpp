#include<stdio.h>

int main()
{
	float t,h,m,T;
	scanf("%f%f",&h,&m);
		t=h+(m/60);
	T=4*t*t/(t+2)-20;
	
	printf("%.2f",T);
	return 0;
	
}
