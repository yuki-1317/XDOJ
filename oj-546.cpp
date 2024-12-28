#include<stdio.h>

int main(){
	double q1,q2,q3,q4;
	scanf("%lf,%lf,%lf,%lf",&q1,&q2,&q3,&q4);
	double n1=q1*q1+q2*q2-q3*q3-q4*q4;
	double n2=2*(q2*q3-q1*q4);
	double n3=2*(q2*q4+q1*q3);
	double n4=2*(q2*q3+q1*q4);
	double n5=q1*q1-q2*q2+q3*q3-q4*q4;
	double n6=2*(q2*q4-q1*q2);
	double n7=2*(q2*q4-q1*q3);
	double n8=2*(q3*q4+q1*q2);
	double n9=q1*q1-q2*q2-q3*q3+q4*q4;
	printf("%.6lf %.6lf %.6lf\n",n1,n2,n3);
	printf("%.6lf %.6lf %.6lf\n",n4,n5,n6);
	printf("%.6lf %.6lf %.6lf\n",n7,n8,n9);
	return 0;
}
