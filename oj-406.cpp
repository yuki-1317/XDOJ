#include<stdio.h>

int main()
{
	char zifu;
	int output;
	scanf("%c",&zifu);
/*Сд��ĸ�����棩*/	if(zifu>='a'&&zifu<'x'){
		output=zifu+3;
	}
	
/*Сд��ĸ�����������*/else if(zifu=='x'||zifu=='y'||zifu=='z'){
		output=zifu+3-26;
	}
	
/*��д��ĸ�����棩*/	else if(zifu>'B'&&zifu<'Z'){
		output=zifu-2;
		
	}
	
/*��д��ĸ�����������*/	else if(zifu=='A'||zifu=='B'){
		output=zifu-2+26;
	}
	
/*�����ַ������棩*/	else if(zifu>='0'&&zifu<='9'){
		output='9'-zifu+'0';
	}
	

	
/*�ո��ַ�*/	else if(zifu==' '){
		output='*';
	}
	
/*�����ַ�*/else{
		output='#';
	}
	printf("%c %c",zifu,output);
	return 0;
}
