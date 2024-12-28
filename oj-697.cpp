#include<stdio.h>

int main()
{
	float km,sum;
	int min;
	
	scanf("%f%d",&km,&min);
	
	if(km<=3) sum=10+min/5*2;
	
	else if(km>3&&km<10) sum=10+(km-3)*2+min/5*2;
	
	else sum=24+(km-10)*3+min/5*2;
	
	printf("%.1f",sum);
	
	
	return 0;
	
}
