#include<stdio.h>

int main()
{
	int D,H;
	scanf("%d%d",&D,&H);
	float m1,m2;
	
	m1=7.86*1/3.0000*3.1415926*D/2.0000*D/2.0000*H*0.001;
	m2=19.3*1/3.0000*3.1415926*D/2.0000*D/2.0000*H*0.001;
	
	printf("%.3f %.3f",m1,m2);
	return 0;
}
