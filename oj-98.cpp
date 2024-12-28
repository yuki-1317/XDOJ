#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	if(m%2==0&&m%3>0&&m%5>0){
		printf("Nice");
		//TODO
	}
	else if(m%3==0&&m%2>0&&m%5>0){
		printf("Good");
		//TODO
	}
	else if(m%5==0&&m%2>0&&m%3>0){
		printf("Best");
		//TODO
	}else{
		printf("Bad");
		//TODO
	}
	return 0;
}
