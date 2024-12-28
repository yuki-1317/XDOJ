#include<stdio.h>

int main()
{
	int a,b,c,m;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
		m=a;
		//TODO
	}else if(b>a&&b>c){
		m=b;
		//TODO
	}else if(c>a&&c>b){
		m=c;
		//TODO
	}
	else {
		m=a;
	}
	printf("%d",m);
	return 0;
}
