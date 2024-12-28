/*
 * Author: Yukino
 * Created: 2024-12-19
 * Description: 
 */
#include<stdio.h>
int main(){
int n;
int a[1000];
scanf("%d",&n);
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}

for(int i=0;i<n;i++){
	for(int j=0;j<n-i-1;j++){
		if(a[j]>a[j+1]){
			int tem=a[j];
			a[j]=a[j+1];
			a[j+1]=tem;
		}
	}
}

printf("%d",a[n-2]);
	return 0;
}
