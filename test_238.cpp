#include<stdio.h>

int main(){
    int a[4][5];
    int x[4]; // 存储每行的最小值
    int y[5]; // 存储每列的最大值
    int min, max;
    
    // 读取数组a的值
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    // 寻找每行的最小值
    for(int i=0; i<4; i++){
        min = a[i][0];
        for(int j=0; j<5; j++){
            if(a[i][j] < min) min = a[i][j];
        }
        x[i] = min;
    }
    
    // 寻找每列的最大值
    for(int j=0; j<5; j++){
        max = a[0][j];
        for(int i=0; i<4; i++){ // 注意这里的循环变量i从0开始，因为我们在遍历列
            if(a[i][j] > max) max = a[i][j];
        }
        y[j] = max;
    }
    
    int found = 0;
    // 寻找鞍点
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            if(x[i] == a[i][j] && a[i][j] == y[j]){
                printf("鞍点: %d 在位置 (%d, %d)\n", a[i][j], i, j);
                found = 1;
                break; // 如果找到鞍点，跳出内层循环
            }
        }
        if(found) break; // 如果找到鞍点，跳出外层循环
    }
    
    if(found == 0) printf("鞍点不存在\n");
    
    return 0;
}
