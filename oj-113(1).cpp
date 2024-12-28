#include<stdio.h>

int fshrink(float m){
	if(m<0){
		return 0;
	}
	else return m;
}

int main(){
    int t,sum;
    float km;
    scanf("%f%d",&km,&t);
   sum=10;
   sum+=(t/5)*2;
   if(km>3){
   	if(km<=10){
	   	sum+=(km-3)*2;
	   }
	else if(km>10){
		sum+=(km-10)*3+14;
	}   
   }
    printf("%d",sum);
	return 0;
}
