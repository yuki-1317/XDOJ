#include<stdio.h>

int main(){
    int a[4][5];
    int x[4]; // �洢ÿ�е���Сֵ
    int y[5]; // �洢ÿ�е����ֵ
    int min, max;
    
    // ��ȡ����a��ֵ
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    // Ѱ��ÿ�е���Сֵ
    for(int i=0; i<4; i++){
        min = a[i][0];
        for(int j=0; j<5; j++){
            if(a[i][j] < min) min = a[i][j];
        }
        x[i] = min;
    }
    
    // Ѱ��ÿ�е����ֵ
    for(int j=0; j<5; j++){
        max = a[0][j];
        for(int i=0; i<4; i++){ // ע�������ѭ������i��0��ʼ����Ϊ�����ڱ�����
            if(a[i][j] > max) max = a[i][j];
        }
        y[j] = max;
    }
    
    int found = 0;
    // Ѱ�Ұ���
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            if(x[i] == a[i][j] && a[i][j] == y[j]){
                printf("����: %d ��λ�� (%d, %d)\n", a[i][j], i, j);
                found = 1;
                break; // ����ҵ����㣬�����ڲ�ѭ��
            }
        }
        if(found) break; // ����ҵ����㣬�������ѭ��
    }
    
    if(found == 0) printf("���㲻����\n");
    
    return 0;
}
