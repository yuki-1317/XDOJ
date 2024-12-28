#include<stdio.h>

int judge(int m,int n,int m1,int n1,int cgrid[][21]){
	if(m1>m||m1<1||n1<1||n1>n){
return 1;
	}
	if(cgrid[m1][n1]==1){
	return 2;
			}
			else return 3;
}//judge founction

int main(){
char grid[21][21];
int cgrid[21][21]={0};
int step=1;
int m,n,c;//±‰¡ø…Ë÷√

scanf("%d%d%d",&m,&n,&c);
for (int i=1;i<=m;i++) {
	for(int j=1;j<=n;j++){
scanf(" %c",&grid[i][j]);
	}
}
//input

int m1=1;
int n1=c;
cgrid[m1][n1]=1;
for(int i=0;i<m*n;i++){
	if(grid[m1][n1]=='N'){
        m1--;
	}
	else if(grid[m1][n1]=='S'){
		m1++;	
	}
	else if(grid[m1][n1]=='W'){
		n1--;
	}
	else if(grid[m1][n1]=='E'){
		n1++;
	}	
		int num=judge(m,n,m1,n1,cgrid);
		cgrid[m1][n1]=1;
		
	if(num==1){
		printf("out %d",step);
		break;
	}
	
	if(num==2){
			printf("loop %d",step);
			break;
		}
 else step++;
}
	return 0;
}
