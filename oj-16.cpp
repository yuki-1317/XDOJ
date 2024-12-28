#include<stdio.h>
#include<ctype.h>

int main()

{
	char a,b,g,d,e,A,B,C,D,E;
	scanf("%c|%c|%c|%c|%c",&a,&b,&g,&d,&e);
	A=tolower(a);
	B=tolower(b);
	C=tolower(g);
	D=tolower(d);
	E=tolower(e);

	
	printf("%c%c%c%c%c!",A,B,C,D,E);
		return 0;
}
