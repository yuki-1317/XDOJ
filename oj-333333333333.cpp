#include<stdio.h>
int jueduizhi(int a,int b){
	if(a>b) return a-b;
	else return b-a;
}

int main()
{
	int m;
	int jian;
	int min=10000;
	scanf("%d",&m);
	int a[m];
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(int x=0;x<m;x++){
		for(int i=x+1;i<m;i++){
			
			jian=jueduizhi(a[x],a[i]);
		if(jian<min) 
		 {
		 	min=jian;
			 }
		}
		
	}
	
	printf("%d",min);
	return 0;
}
