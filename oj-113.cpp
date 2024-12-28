#include<stdio.h>
#include<math.h>

int main()
{
	int m2,t;
	float km,m1;
	scanf("%f%d",&km,&t);
	
	
	if(km<=3)
	{
m1=10;		
	}
	else if(km>3&&km<=10)
	{
		m1=10+(km-3)*2;
	}
	else
	{
	m1=24+(km-10)*3;
	
	}
	
		if(t<5){
			m2=0;
			//TODO
		}else{m2=t/5*2;
			//TODO
		}


	int sum=round(m1+m2);
	printf("%d",sum);
	return 0;
	
	}

	
;
