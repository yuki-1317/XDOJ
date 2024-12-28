#include<stdio.h>

int c[1024]={1,1};
int fei(int n){
	for(int i=0;i<n-2;i++){
		c[i+2]=c[i]+c[i+1];
	}
	return c[n-1];
}

int juge(int n){
	int found=0;
	 for(int i=2;i<n;i++){
	 	if(n%i==0){
		 	found=1;
		 }
	 }
	 return found;
}

int main()
{
	int n;
	scanf("%d",&n);
	if(juge(fei(n))==1){
		printf("%d",fei(n));
	}
	else printf("yes");
	return 0;
}
