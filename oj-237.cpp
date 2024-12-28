#include<stdio.h>
#include<string.h>

int main(){
	char a[1024];
	scanf("%s",a);
	int shu;
	scanf("%d",&shu);int
	 m=strlen(a);
	
	if(shu>m){
		printf("error");
	}
	else{
		for(int i=shu-1;i<m;i++){
				printf("%c",a[i]);
		}
	}
	return 0;
}
