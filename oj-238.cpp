#include<stdio.h>

int main(){
	int a[4][5];
	
	 int x[5];
	 int y[4];
	 int min;
	 int max;
	 for(int i=0;i<4;i++){
	 	for(int j=0;j<5;j++){
		 	scanf("%d",&a[i][j]);
		 }
	 }
	for(int i=0;i<5;i++){
		min=a[0][i];
		
		for(int j=0;j<4;j++){
			if(a[j][i]<min) min=a[j][i];
		}
		 x[i]=min;
	}
	for(int i=0;i<4;i++){
			 max=a[i][0];
			
			for(int j=0;j<5;j++){
				if(a[i][j]>max)max=a[i][j];
			}
			 y[i]=max;
		}
		int found=0;
		for(int i=0;i<5;i++){
			for(int j=0;j<4;j++){
				if(x[i]== y[j]){
					printf("%d %d %d\n",x[i],j+1,i+1);
				found=1;
				}
			}
			
		}
		if(found==0)printf("°°µã²»´æÔÚ");
	


		
	return 0;
}
