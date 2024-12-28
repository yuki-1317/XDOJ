#include<stdio.h>
#include<math.h>
int weishu(int a,int b){
	int count=0;
	while(a>0){
		a=a/b;
		count++;
	}
	return count;
	
}


int main()
{
	int n;
	scanf("%d",&n);
	int m=n*n;
	int k;
	int f;
	k=weishu(n,10);
	
int x=pow(10,k);
f=m%x;

if(f!=n){
		printf("%d 0",n);
	}
	if(f==n){
		printf("%d 1",n);
	}	
	
	return 0;
} 
