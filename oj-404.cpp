#include<stdio.h>

int main()
{
	float degree,mony,ticheng;
	scanf("%f%f",&degree,&mony);
	if(degree==1){
		ticheng=(mony-50000)*0.03;
		printf("1 50000.0 %.1f",ticheng);
		
	}
		if(degree==2){
			ticheng=(mony-35000)*0.02;
			printf("2 35000.0 %.1f",ticheng);
			
		}
		if(degree==3){if(mony>=20000){
			ticheng=(mony-20000)*0.02;
			printf("3 20000.0 %.1f",ticheng);}
			else printf("3 20000.0 0.0");
			
		}
			if(degree==4){
				ticheng=(mony-5000)*0.025;
				printf("4 5000.0 %.1f",ticheng);
				
			}
	return 0;
}
