#include<stdio.h>

int main()
{
	int a[1024];
	int m,y,x;
	int max=-1;
	int sum;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		x=a[0];
		if(a[i]==x){
			i++;
		}
		if(a[i]!=x){
			y=i;
		
		
		for(int i=0;i<y;i++){
			sum=sum+a[y];
		}
		}
		if(sum>max){
			max=sum;
		}
		x=a[y+1];
	}
	printf("%d",sum);
	return 0;
}
