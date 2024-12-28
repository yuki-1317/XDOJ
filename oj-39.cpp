#include<stdio.h>

int main()
{
	int a[100][100];
	int m,n;
	
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			{scanf("%d",&a[i][j]);}
		}
		
		int min=a[0][0];
		int max=a[0][0];
		
			int k[10];
	for(int i=0;i<n;i++){
		max=a[0][i];
		for(int j=0;j<m;j++){
			if(a[j][i]>max) max=a[j][i];
			
		}
		
		k[i]=max;
		
	}
	int o[10];
	for(int i=0;i<m;i++){
		min=a[i][0];
			for(int j=0;j<n;j++){
				if(a[i][j]<min)min=a[i][j];
				
			}
			
			o[i]=min;
			
		}
		int found=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(k[j]==o[i]){printf("%d %d %d\n",i,j,o[i]);
	            found=1;}
			}
		}	
		if(found==0)printf("no\n");
		
	
	return 0;
	}
