#include<stdio.h>

int main()
{
	char p;
	scanf("%c",&p);
	if(p>='a'&&p<='z'){
		p=p-26-6;
		printf("%c",p);
	}
	else if(p>='A'&&p<='Z'){
		p=p+26+6;
		printf("%c",p);
	}
	else printf("%c",p);
	return 0;
}
