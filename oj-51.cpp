#include<stdio.h>

int main()
{
	int a[4];
	for(int i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(int i=0;i<4;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("%d",max);
	return 0;
}
