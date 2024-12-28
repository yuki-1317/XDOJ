#include<stdio.h>

int main()
{
	int m,s;
	float t,c;
	scanf("%d%d",&m,&s);
	t=m+s/60.000;
	if(t>=0&&t<=10){
		c=100-5*t;
		
	}else if(t>10&&t<=30){
		c=50-(t-10);
		
	}else if(t>30&&t<=50){
		c=30-(t-30)/2;
	}
	else{
		c=20;
	}
	printf("%.1f",c);
	return 0;
}
