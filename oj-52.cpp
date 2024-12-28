#include<stdio.h>

int main()
{
	char n;
	scanf("%c",&n);
	if(n>='a'&&n<='z'){
		n-='a'-'A';
		
	}
	else if(n>='A'&&n<='Z'){
		
		n+='a'-'A';
	}
	printf("%c",n);
	return 0;
}
