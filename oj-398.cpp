#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *compress(char *src);
int main()
{
	char src[100];
	scanf("%s",src);

	char *ps = compress(src);
	
	puts(ps);
	return 0;
}
char *compress(char *src){
	char *ps=(char*)malloc(100*sizeof(char));
	int k=0;int i=0;
	while(src[i]!='\0'){
		char curr=src[i];
		int count=1;
		while(src[i+1]==curr){
			count++;
			i++;
		}
		ps[k++]=curr;
		ps[k++]=count+'0';
		i++;
	}
	ps[k]='\0';
	return ps;
	
}
