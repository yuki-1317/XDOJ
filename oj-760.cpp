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

int o=0;
for(int i=0;i<n;i++){
	if(a[i]>=0&&a[i]%2==0){
o=o+a[i];
	}
}
printf("%d",o);
	return 0;
}
