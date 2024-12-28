#include<stdio.h>
typedef struct{
	char a[10];
	float b;
	float q;
	float w;
}ss;

int main()
{
		ss n[100];
		int m;
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			scanf("%s%f%f%f",n[i].a,&n[i].b,&n[i].q,&n[i].w);
		}
		 float  x[1024];
		for(int i=0;i<m;i++){
			x[i]=n[i].b+n[i].q-n[i].w;
		}
		for(int i=0;i<m;i++){
			printf("%s %.2f\n",n[i].a,x[i]);
		}
	return 0;
}
