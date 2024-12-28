#include<stdio.h>
int juest(int i){
	int found=0;
	for(int j=2;j<i;j++){
		if(i%j==0){found=1;}
	}
	return found;
}
int main(){
	int n;
	int a[200];
	scanf("%d",&n);
	int k=0;
	for(int i=2;i<9999;i++){
		if(juest(i)==0){
			a[k]=i;
			k++;
		}
	}
	int output=0;
	for(int i=n-1;i<n+9;i++){
		output=a[i]+output;
	}
	printf("%d",output);
	return 0;
}
