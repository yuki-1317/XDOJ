#include<stdio.h>
#include<string.h>

int main(){
	char a[101];
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';
	int len=strlen(a);
	int k=0;
	int max=0;
	for(int i=0;i<len;i++){
	if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
		k++;
		if(k>max){
		max=k;
		}
	}else{
		k=0;
	}
	}
	
	printf("%d",max);
	return 0;
}
