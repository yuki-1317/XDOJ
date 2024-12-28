#include<stdio.h>

int main()
{
	int day,rate,num;
	int found=1;
	scanf("%d%d%d",&day,&rate,&num);
	num=num-num/10*10;
	
	if(day>=1&&day<=5){
		if(rate<200){
			printf("%d no",num);
			found=0;
		}
	    if(rate>=200&&rate<400){
			if(day==1){
				if(num==1||num==6){
					printf("%d yes",num);
					found=0;
				}
			}if(day==2){
				if(num==2||num==7){
					printf("%d yes",num);
					found=0;
				}
			}
			if(day==3){
				if(num==3||num==8){
					printf("%d yes",num);
					found=0;
				}
			}
			if(day==4){
				if(num==4||num==9){
				printf("%d yes",num);
				found=0;
			}	
			}
			if(day==5){
				if(num==5||num==0){
				printf("%d yes",num);
				found=0;
			}	
			}
		}
	    if(rate>=400){
			if(day%2==1){
				if(num%2==1){
					printf("%d yes",num);
					found=0;
				}
				}
		
				if(day%2==0){
					if(num%2==0){
						printf("%d yes",num);
						found=0;
					}
				}
		}
	}

	
		if(found==1){
			printf("%d no",num);
		}
	return 0;
}
