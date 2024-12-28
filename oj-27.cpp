#include<stdio.h>

int main()
{
	float m;
	float n;
	scanf("%f",&m);
	if(m<=110&&m>=0){
		n=0.50*m;
	}
	else if(m>110&&m<=210){
		n=55+(m-110)*0.55;
	}
	
	else{
		n=110+(m-210)*0.70;
	}
	printf("%.2f",n);
	return 0;
}
