#include<stdio.h>

int main()
{
	int x;
	int i=2;
	scanf("%d",&x);
	while(i<x){
		if(x%i==0){
			printf("No");
			return 0;
		}
		i++;
	}

	printf("Yes");
	return 0;
}
