#include<stdio.h>

int main(){
	int m,n;
	int arr[100][100];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[m-j-1][i]);
		}
		printf("\n");
	}
	return 0;
}
