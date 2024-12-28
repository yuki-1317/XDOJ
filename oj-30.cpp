#include<stdio.h>

int main()
{
	int a,b;
	int sum=0;
	int k=0;
	scanf("%d%d",&a,&b);
	int c[100000];
	 for(int i=a;i<=b;i++){
	 	sum=0;
  		for(int j=0;j+1<i;j++){
			if(i%(j+1)==0){
				c[k]=j+1;
				sum=sum+c[k];
				k++;
			}
    }
    if(i==sum){
		printf("%d\n",i);
	     }
 }

	return 0;
}
