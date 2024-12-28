#include<stdio.h>

int main()
{
	int a,b;
	int result;
	scanf("%d%d",&a,&b);
	
	if(a%4==0&&a%100!=0){
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
			result=31;
		}
		else if(b==4||b==6||b==9||b==11){
			result=30;
		}
		if(b==2) {result=29;}
		
	}
	
	else if(a==2000){
		if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
					result=31;
				}
				else if(b==4||b==6||b==9||b==11){
					result=30;
				}
				else result=29;
	}
	
	else{
			if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
				result=31;
			}
			else if(b==4||b==6||b==9||b==11){
				result=30;
			}
			else result=28;
			
		}
		
		printf("%d",result);
	return 0;
}
