#include<stdio.h>

int main (){
    int matrix[20][20];
    int n,m,t,k;
    int num[50]={0};
    int stari = -1,starj = -1;
    
    scanf ("%d %d %d %d",&n, &m, &t, &k);
    for (int i=0; i < n; i++){
        for( int j=0; j < m; j++){
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == k && stari == -1){
                stari = i;
                starj = j;
            }
        }
    }
    
    int i = stari,j = starj;
    for(i = stari; matrix[i][j] == k; i++){
        for(j = starj; matrix[i][j] == k; j++){
            if(j >= 1) 
            num[matrix[i][j-1]] = 1;
            if(j+1 < m) 
            num[matrix[i][j+1]] = 1;
            if(i >= 1)
            num[matrix[i-1][j]] = 1;
            if(i+1 < n) 
            num[matrix[i+1][j]] = 1;
        }
        j=starj;
    }
    
    int sum = 0;
    for(i = 1; i<51; i++){
        sum+=num[i];
    }
    if(num[k] == 1) sum--;
    printf("%d",sum);
    return 0;
}
