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

for(int i=0;i<n-1;i++){
	for(int j=0;j<n-i-1;j++){
		if(a[j]>a[j+1]){
			int tem=a[j];
			a[j]=a[j+1];
			a[j+1]=tem;
		}
	}
}
int min=1000;
for(int i=0;i<n-1;i++){
	if(a[i+1]-a[i]<min){
		min=a[i+1]-a[i];
	}
}
printf("%d",min);
	return 0;
}
