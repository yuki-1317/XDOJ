#include<stdio.h>

int main()
{
	int a[100],k,i,m;
	
	scanf("%d %d",&m,&k);
	for(i=0;i<=m-1;i++){
		scanf("%d",&a[i]);
	}

	int found=0;
	for(i=0;i<=m-1;i++){
		if(a[i]==k)
		{printf("%d ",i);
		found=1;}
	    
	    
	}
if(!found){printf("-1");}

	return 0;
	
}
