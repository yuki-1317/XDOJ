#include<stdio.h>
#include<string.h>

int main(){
	char a[51];
	fgets(a,sizeof(a),stdin);
	a[strcspn(a,"\n")]='\0';
	int shu;
	int len=strlen(a);
	char b[51];
	scanf("%d",&shu);
	if(len<shu){printf("error");}
	else {int k=0;
		 for(int i=shu-1;i<len;i++){
		 	b[k]=a[i];
		 	k++;
		 }
		 b[k]='\0';
		 printf("%s\n",b);
	}
	return 0;
}
