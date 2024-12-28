#include<stdio.h>

int main(){
	int a[100][100];
	int c[1024];
	int m,n;
	
	scanf("%d%d",&m,&n);
	for(int i=0;i<=0;i++){
		for(int j=0;j<=0;j++){
			scanf("%d",&a[i][j]);
		}
	}

	
	for(int i=0;i<m*n;i++){
		printf("%d",c[i]);
	}
	return 0;
}
