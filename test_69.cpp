#include<stdio.h>

int main()
{
	    int a[100][100];
	    int m,n;

	    scanf("%d%d",&m,&n);
	    
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		scanf("%d",&a[i][j]);
		}
	}
	    
	for(int i=0;i<m;i++){
		int x=-1;
		int y=-1;
		int cc=0;
		int mc=0;
		for(int j=0;j<n;j++){
			if(a[i][j]==1){
				if(cc==0){
					x=j;
				}
			cc++;
			if(cc>mc){
				mc=cc;
				y=j;
			}
			
			}else{
				cc=0;
			}
		}
	
		if(mc>=1){
			printf("%d %d\n",x,y);
			}
		if(mc==0){
			printf("-1 -1\n");
		}
	}
		
	
	return 0;
}
