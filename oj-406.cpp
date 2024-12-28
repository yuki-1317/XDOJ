#include<stdio.h>

int main()
{
	char zifu;
	int output;
	scanf("%c",&zifu);
/*小写字母（常规）*/	if(zifu>='a'&&zifu<'x'){
		output=zifu+3;
	}
	
/*小写字母（特殊情况）*/else if(zifu=='x'||zifu=='y'||zifu=='z'){
		output=zifu+3-26;
	}
	
/*大写字母（常规）*/	else if(zifu>'B'&&zifu<'Z'){
		output=zifu-2;
		
	}
	
/*大写字母（特殊情况）*/	else if(zifu=='A'||zifu=='B'){
		output=zifu-2+26;
	}
	
/*数字字符（常规）*/	else if(zifu>='0'&&zifu<='9'){
		output='9'-zifu+'0';
	}
	

	
/*空格字符*/	else if(zifu==' '){
		output='*';
	}
	
/*其他字符*/else{
		output='#';
	}
	printf("%c %c",zifu,output);
	return 0;
}
