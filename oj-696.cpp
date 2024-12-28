#include<stdio.h>

int main()
{
	int m;
	int a[1024];
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	
	
	int i=0;
	int x=0;
	int max=-1000;
	for(i=0;i<m;i++){
		
		
		if(a[i]>max)  {max=a[i];
	x=i;}
		
		
	}
	int temper=a[m-1];
			a[m-1]=a[x];
			a[x]=temper;


	int j=0;
	int y=0;
	int min=10000;
	for( j=0;j<m;j++){
	
		if(a[j]<min){min=a[j];
		y=j;}
	}
			
					
		
					
		
		
		
		int temper1=a[0];
				a[0]=a[y];
				a[y]=temper1;
		for(int i=0;i<m;i++){
			printf("%d ",a[i]);
		}
		
	return 0;
}
