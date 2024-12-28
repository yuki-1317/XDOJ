#include<stdio.h>
#include<string.h>

int main(){
const char *a[]={
	"January", "February", "March", "April", "May", 
	        "June", "July", "August", "September", "October", 
	        "November", "December"
};
int s;
scanf("%d",&s);
if(s>12||s<1){
	printf("wrong");
}
else {printf("%s",a[s-1]);}

	return 0;
}
