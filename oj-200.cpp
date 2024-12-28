#include<stdio.h>

int main()
{
	int a[10000]={0}; 
	int b[10000]={0};
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int p,i;
	scanf("%d",&p);
	for(i=p+1;i<10;i++){
		a[i]=array[i];
		printf("%d ",a[i]);
	}
	
	for(i=0;i<p+1;i++){
			b[i]=array[i];
			printf("%d ",b[i]);
		}
	return 0;
}
