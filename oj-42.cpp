#include<stdio.h>

int main()
{
	int a,b,x,y;
	scanf("%d %d",&a,&b);
	x=a%b;
	y=a/b;
	if(a%b==0){
		printf("yes");
		//TODO
	}else{printf("%d  %d",y,x);
		//TODO
	}
	return 0;
}
