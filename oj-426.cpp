#include<stdio.h>

int main()
{
     int a,b,c;
     scanf("%d%d%d",&a,&b,&c);
       int max=a;
	           if(b>max)max=b;
	          if(c>max)max=c;
	           
       
        int min=a;
		        if(b<min)min=b;
		        else if(c<min)min=c;
		     
		        
		  int zhong=a+b+c-max-min;
		    
		        if(zhong+min<=max)
										{printf("不是三角形");}
								        else if(zhong+min>max&&min*min+zhong*zhong==max*max)
										{int S=1.00/2.00*zhong*min;
											printf("%d",S);}
											else printf("其他三角形");
				       
		        
	return 0;
}
