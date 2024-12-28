#include<stdio.h>

int main()
{
	int a;
	int b[4];
	scanf("%d",&a);
	
	if(a>0){
		
	
	for(int i=0;i<3;i++){
	    b[i]=a-a/10*10;
	    a=(a-b[i])/10;
	}
	
		for(int j=2;j>=0;j--){
		printf("%d ",b[j]);
		
		}
		printf("\n");
		
		for(int i=0;i<3;i++){
			printf("%d ",b[i]);
			}
	}
	
	if(a<0){
			a=-a;
		
		for(int i=0;i<3;i++){
		    b[i]=a-a/10*10;
		    a=(a-b[i])/10;
		}
		
			for(int j=2;j>=0;j--){
			printf("%d ",b[j]);
			
			}
			printf("\n");
			
			for(int i=0;i<3;i++){
				printf("%d ",b[i]);
				}
		}
	return 0;
}
