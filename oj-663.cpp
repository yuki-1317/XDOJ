#include <stdio.h>

int main() {
    int a[30];  // ������󳤶�Ϊ30
    int n = 0;  // ���е�ʵ��Ԫ�ظ���
    
    // ��ȡ����
    while (scanf("%d", &a[n]) == 1) {
        n++;
        char ch = getchar();  // ��ȡ�ո����
        if (ch == '\n') break;  // �������з�ֹͣ����
    }

    int m;
    scanf("%d", &m);  // ��ȡ�ο�ֵ m

    // ���������������ڴ洢ɾ�� m �������
    int new_size = 0;

    // ����ԭ���飬�������� m ��Ԫ���Ƶ�����ǰ��
    for (int i = 0; i < n; i++) {
        if (a[i] != m) {
            a[new_size] = a[i];
            new_size++;
        }
    }

    // �������������
    for (int i = 0; i < new_size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
