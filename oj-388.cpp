#include<stdio.h>

int main()
{
	char a[6];
	int sum=0;
	for(int i=0;i<5;i++){
		scanf(" %c",&a[i]);
	}
	for(int i=0;i<5;i++){
		if(a[i]=='A'||a[i]=='a'){
		sum++;
			}
	}
	printf("%d",sum);
	return 0;
}
