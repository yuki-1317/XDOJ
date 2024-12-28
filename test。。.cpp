#include<stdio.h>

int main(){
    int a[100];
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==k) printf("%d ",i);
        else count++;
    }
    if(count==n) printf("-1");
    return 0;
}
