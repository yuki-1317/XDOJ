#include<stdio.h>
#include<math.h>

int main()
{
	float n,m;
	int i;
	scanf("%f",&n);
	m=sqrt(n);

	if(round(m)-m==0){
		i=m;
		printf("%d",i);
	}
	else{
	printf("no");
	}
	
	return 0;
}
