#include<stdio.h>

typedef struct {
	int x1;
	int x2;
	int y1;
	int y2;
} eq;

int main() {
	int num;
	eq arr[100];
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d%d%d%d", &arr[i].x1, &arr[i].y1, &arr[i].x2, &arr[i].y2);
		arr[i].x1--;
		arr[i].y1--;
		arr[i].x2--;
		arr[i].y2--;
	}
	

	int ss[100][100] = {0};
	for (int i = 0; i <num; i++) {
		int nx1=arr[i].x1;int nx2=arr[i].x2;int ny1=arr[i].y1;int ny2=arr[i].y2;
		for (int j = nx1; j <=  nx2; j++) {
			for (int k = ny1; k <= ny2; k++) {
				ss[j][k]=1;
			}
		}

	}
	
	int xmax=0;
	int ymax=0;
	for(int i=0;i<num;i++){
	if(arr[i].x2>xmax)xmax=arr[i].x2;
	}
		for(int i=0;i<num;i++){
		if(arr[i].y2>ymax)ymax=arr[i].y2;
		}
	int sum=0;
for(int i=0;i<ymax;i++){
	for(int j=0;j<xmax;j++){
		if(ss[j][i]==1){
			sum++;
		}
	}
}
printf("%d",sum);
	return 0;
}
