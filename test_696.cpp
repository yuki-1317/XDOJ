#include<stdio.h>

int main() {
    int m;
    int a[1024];
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    // ��ʼ�����ֵ����Сֵ������
    int maxIndex = 0, minIndex = 0;
    int max = a[0], min = a[0];

    // Ѱ�����ֵ����Сֵ������
    for (int i = 1; i < m; i++) {
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
        if (a[i] < min) {
            min = a[i];
            minIndex = i;
        }
    }

    // ������ֵ����Сֵ����ͬһ��Ԫ�أ��򽻻�����
    if (maxIndex != minIndex) {
        int temp = a[maxIndex];
        a[maxIndex] = a[minIndex];
        a[minIndex] = temp;
    }

    // ������
    for (int i = 0; i < m; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); // �������

    return 0;
}
