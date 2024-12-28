#include<stdio.h>
#include<string.h>

int main(){
	char m[101];
	fgets(m, sizeof(m), stdin);
	int k=strlen(m);
	int shu=0;
	int zi=0;
	int qi=0;
	if(m[k-1]=='\n'){
		m[k-1]='\0';
		k--;
	}
	for(int i=0;i<k;i++){
		if(m[i]>='0'&&m[i]<='9'){
			shu++;
		}
		else if((m[i]>='a'&&m[i]<='z')||(m[i]>='A'&&m[i]<='Z')){
			zi++;
		}
		else {qi++;}
	}
	printf("%d %d %d",zi,shu,qi);
	return 0;
}
