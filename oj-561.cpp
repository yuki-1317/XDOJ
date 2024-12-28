#include<stdio.h>
#include<string.h>

int main(){
	char a[101];
	scanf("%s",a);int len=strlen(a);
	for(int i=0;i<len;i++){
		printf("%c ",a[i]);
	}
	
	return 0;
}
