#include<stdio.h>
#include<math.h>

int main(){
	double a,b;
	scanf("%lf%lf",&a,&b);
	float cl,td,sp;
	cl=a+sqrt(a*b+1);
	td=a*(cl+b)*(cl+b);
	sp=td*cl+b*b;
	printf("CL=%.2f tD=%.2f SP=%.2f",cl,td,sp);
	
	return 0;
}
