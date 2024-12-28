#include<stdio.h>

int main()
{
	char n;
		scanf("%c",&n);
		if(n>='a'&&n<='z'){
			n-='a'-'A';
				printf("%c",n);
		}
		else if(n>='A'&&n<='Z'){
			
			n+='a'-'A';
				printf("%c",n);
		}
	else if(n>='0'&&n<='9'){printf("%c是数字",n);}
		else printf("%c是其他字符",n);
		
	return 0;
}
