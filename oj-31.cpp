#include<stdio.h>

int main()
{
	int a,b;
	int x[100000];
	int y[100000];
	int k=0;
	int m=0;
	int p=0;
	int z[100000];
	scanf("%d%d",&a,&b);
	if(a==0||b==0){
		if(b==0){
		printf("%d",a);
		}if(a==0){
		 printf("%d",b);
		}
	}
	else if(a==1||b==1){
		printf("1");
	}
	
	else{
		int found=1;
		for(int i=0;i<=a;i++){
			if(a%(i+1)==0){
				x[k]=i+1;
				k++;
			}
		}
		
		for(int i=0;i<=b;i++){
					if(b%(i+1)==0){
						y[p]=i+1;
						p++;
					}
				}
	
	
	for(int i=0;i<k;i++){
		for(int j=0;j<p;j++){
			if(x[i]==y[j]){
				z[m]=y[j];
				m++;
				found=0;
			}
		}
	}
	int max=-1;
	for(int i=0;i<p;i++){
		if(z[i]>max){
			max=z[i];
		}
	}
	if(found==0){
	printf("%d",max);
	}
	if(found==1){
		printf("1");
	}
	}	
	return 0;
}
