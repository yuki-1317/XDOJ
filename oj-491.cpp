#include<stdio.h>

int main(){
	int geshu;
	scanf("%d",&geshu);
	int panduan[100];
	for(int i=0;i<geshu;i++){
		int chang;
		scanf("%d",&chang);
		int a[10][10];
		for(int k=0;k<chang;k++){
			for(int j=0;j<chang;j++){
				scanf("%d",&a[k][j]);
			}
		}
		int found=0;
		for(int j=1;j<chang;j++){
			for(int k=0;k<j;k++){
				if(a[j][k]!=0){
					found=1;
				}
				
			}
		}
		panduan[i]=found;
	
	}
	for(int i=0;i<geshu;i++){
		if(panduan[i]==0){
				printf("YES\n");
			}
			if(panduan[i]==1){
				printf("NO\n");
			}
	}
	
	return 0;
}
