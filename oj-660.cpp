#include <stdio.h> 
#define N 100 
typedef struct{ 
        char name[81]; 
        double price; 
}Book; 
 
void  find_max_min(Book bk[], int n , int *max_idx , int *min_idx); 
 
int main() 
{ 
 int n; 
 scanf("%d",&n); 
   getchar(); 
 
 Book bk[N]; 
 
 int i; 
 for(i=0;i<n;i++){ 
    gets(bk[i].name); 
    scanf("%lf",&bk[i].price); 
      getchar(); 
 } 
  
int max_idx=0,min_idx=0; 
    find_max_min(bk,n,&max_idx, &min_idx); 
  
 printf("%.2lf, %s\n",bk[max_idx].price,bk[max_idx].name); 
 printf("%.2lf, %s\n",bk[min_idx].price,bk[min_idx].name); 
  
 return 0; 
}
void  find_max_min(Book bk[], int n , int *max_idx , int *min_idx){
	double max=0;double min=100000;
	for(int i=0;i<n;i++){
		if(bk[i].price>max){
			max=bk[i].price;
			*max_idx=i;
		}
		if(bk[i].price<min){
					min=bk[i].price;
					*min_idx=i;
				}
	}
	
}
