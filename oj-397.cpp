#include<stdio.h>
typedef struct{
	char m[1024];
	int k;
}ss;

int main(){
	int n;;
	scanf("%d",&n);
	ss a[1024];
	for(int i=0;i<n;i++){
		scanf("%s%d",a[i].m,&a[i].k);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j].k<a[j+1].k){
				ss tem=a[j];
				a[j]=a[j+1];
				a[j+1]=tem;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s %d\n",a[i].m,a[i].k);
	}
	
	return 0;
}
