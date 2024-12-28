#include<stdio.h>

int main()
{
	    int m;
      	int a[1024];
	    int max=-100;
	    
	    scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	int sum=a[0];
for(int j=0;j<m;j++){

			if(a[j]==a[j+1]){
				sum=sum+a[j+1];
			}
			else {
				if(j==m-1) 
				sum=a[j];
				else sum=a[j+1];
			}
			
			if(sum>max){
			        	max=sum;
							}
							
}	
			
	printf("%d",max);
	return 0;


}
