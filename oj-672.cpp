#include<stdio.h>
#include<math.h>

int main()
{
	float n;
	float m=1;
	float sum=0;
	float x;
	scanf("%f%f",&n,&x);
	
	for(int i=1;i<=2*n-1;i++){
		if(i%2==0){
			sum=sum;
		}
		else if(i%2==1){
			m=1;
			for(int j=1;j<=i;j++){
				m=m*j;
		}
		if(i%4==3){
			sum=sum-powf(x,i)/m;
		}
		else if(i%4==1){
			sum=powf(x,i)/m+sum;
		}
		}
	}
	
	printf("%.4f",sum);
	return 0;
}
