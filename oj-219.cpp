#include<stdio.h>
int found=0;
int judge(int n){
	int found=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			found=1;
		}
	}
	return found;
}

int main(){
	int n;
	scanf("%d",&n);
	found=judge(n);
	if(found==0){
		printf("YES");
	}
	if(found==1){
	printf("NO");
	} 
	return 0;
}
