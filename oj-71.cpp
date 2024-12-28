#include<stdio.h>

int main()
{
	int n,m,t,k;
	scanf("%d %d %d %d",&n,&m,&t,&k);//输入行·列·区块数量·目标区块
	int a[100][100];//引入二维数组
	int pan[100]={0};
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}//读取
	
	int x[1024],y[1024];
	int o=0;
	int sum=0;
	
	for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==k){
                 x[o]=i,y[o]=j;
                 o++;
                 
				}
			}
		}
		
	
	for(int i=0;i<o;i++){
		
			
			if(x[i]>0&&a[x[i]-1][y[i]]!=k&&pan[a[x[i]-1][y[i]]]==0){
				sum++;
				pan[a[x[i]-1][y[i]]]=1;
			}
			if(x[i]<n-1&&a[x[i]+1][y[i]]!=k&&pan[a[x[i]+1][y[i]]]==0){
				sum++;
				pan[a[x[i]+1][y[i]]]=1;
				
			}
						
			 if(y[i]>0&&a[x[i]][y[i]-1]!=k&&pan[a[x[i]][y[i]-1]]==0){
				sum++;
				pan[a[x[i]][y[i]-1]]=1;
			}
			 if(y[i]<m-1&&a[x[i]][y[i]+1]!=k&&pan[a[x[i]][y[i]+1]]==0){
				sum++;
				pan[a[x[i]][y[i]+1]]=1;
			}						
		
	}
	printf("%d",sum);
	return 0;
}
