#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int ss=a-a/60*60;
	a=a/60;
	int mm=a-a/60*60;
	a=a/60;
	int hh=a-a/60*60;
	
	if(hh>12){
		printf("%02d:%02d:%02d pm",hh,mm,ss);
	}
	if(hh<12){
			printf("%02d:%02d:%02d am",hh,mm,ss);
		}
		
	return 0;
}
