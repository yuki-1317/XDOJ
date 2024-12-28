#include<stdio.h>


int main()
{
	int a;
	int b[1024],c[1024];
	int m;
	int j=0;
	int y=0;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a);
	
	if(a%2==0){
		b[j]=a;
		j++;}
	if(a%2!=0)	{
		c[y]=a;
		y++;}


}

for(int i=0;i<j-1;i++){
	for(int m=0;m<j-1-i;m++){
		if(b[m]<b[m+1]){
			int temper=b[m+1];
			b[m+1]=b[m];
			b[m]=temper;
		}
	}
}
for(int i=0;i<y-1;i++){
	for(int m=0;m<y-1-i;m++){
		if(c[m]<c[m+1]){
		int temper=c[m+1];
		c[m+1]=c[m];
					c[m]=temper;
		}
	}
}
for(int i=0;i<j;i++){
	printf("%d ",b[i]);
}
for(int i=0;i<y;i++){
printf("%d ",c[i]);
}
	return 0;
}
