#include<stdio.h>

int main()
{
	int a[100];
	int x[100]={0};
	int y[100]={0};
	int m;
	scanf("%d",&m);
	for(int i=0;i<2*m;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		x[i]=a[i],y[i]=a[m+i];
	}
	for(int i=0;i<m;i++){
		printf("%d ",y[i]);
		
	}
	for(int i=0;i<m;i++){
		printf("%d ",x[i]);
	}
	
	return 0;
}
