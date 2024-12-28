#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
if(a>=90){
	printf("A");
}if(a<90&&a>=80){
	printf("B");
}
if(a>=70&&a<80){
	printf("C");
}if(a>=60&&a<70){
	printf("D");
}if(a<60){
	printf("E");
}
	return 0;
}
