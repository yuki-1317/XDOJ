#include<stdio.h>

int main()
{
	int day;
	int a[31];
	int b[31];
	scanf("%d",&day);
	for(int i=0;i<day;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<day-1;i++){
		if(a[i]>a[i+1]){
			b[i]=a[i]-a[i+1];
		}
		else if(a[i]<=a[i+1])
		{
		b[i]=a[i+1]-a[i];
			}
	}
	
	int max=-100;
	
	for(int i=0;i<day-1;i++){
		if(b[i]>max){
			max=b[i];
		}
		
	}
	printf("%d",max);	
	return 0;
}
