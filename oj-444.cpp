#include<stdio.h>
#include<math.h>

int main(){
	double pi;
	double tempi=0;
	int n;
	scanf("%d",&n);
	//1
	double k=0;
	for(int i=1;i<=n;i++){
	tempi+=pow(-1,k)*(1.0000000000/(2*i-1));
	k++;
	}
	//2
	pi=4*tempi;
	printf("%.6lf",pi);
	//3
	return 0;
}
