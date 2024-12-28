#include<stdio.h>
#include<string.h>

int main() {
	char a[200];
	fgets(a, sizeof(a), stdin);
	a[strcspn(a, "\n")] = '\0';
	int found = 0;
	int m = sizeof(a);
	for(int i=0;i<m-3;i++){
		if(a[i]=='A'&&a[i+1]=='A'&&a[i+2]=='A'&&a[i+3]=='A'){
			int mowei;
			int biaozhi1=0;
			for(int j=i+4;j<m-3;j++){
				if(a[j]=='B'&&a[j+1]=='B'&&a[j+2]=='B'&&a[j+3]=='B'){mowei=j-1;biaozhi1=0;found=1;}
				}
			if(biaozhi1==0){
				if(i+4+19>m){
				found=0;
				}
				else {mowei=i+23;found=1;}
			}
			for(int j=i+4;j<mowei;j++){
							printf("%c",a[j]);
						}
		}
	}
	
	if(found==0){
		printf("skip_both");
	}
	return 0;
	}
