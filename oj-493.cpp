#include<stdio.h>
typedef struct{
	int num;
	char name[20];
	int s1;
	int s2;
	int s3;
}ss;
int main(){
	ss stu[1024];int n;scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%s%d%d%d",&stu[i].num,stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].s3);
	}
	int b[1024];
	for(int i=0;i<n;i++){
		b[i]=stu[i].s1+stu[i].s2+stu[i].s3;
	}
	int max=-1;
	int jihao=-1;
	for(int i=0;i<n;i++){
		if(max<b[i]){
			max=b[i];
			jihao=i;
		}
	}
	printf("%s %d %d",stu[jihao].name,stu[jihao].num,b[jihao]);
	return 0;
}
