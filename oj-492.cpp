#include<stdio.h>
#include<string.h>

int main(){
	char a[40];
	scanf("%s",a);
	int m=strlen(a);
	for(int i=0;i<m;i++){
		printf("%c\n",a[i]);
	}
	
	return 0;
}
