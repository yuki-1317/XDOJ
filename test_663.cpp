#include <stdio.h>

int main() {
    int a[31];
    int n = 0;
    
    // ��ȡ��������
    while (scanf("%d", &a[n]) == 1) {
        n++;
        if (getchar() == '\n') break; // ����������з�ֹͣ����
    }

    int m;
    scanf("%d", &m);  // ��ȡ��ɾ����Ԫ��m

    // ���ɾ��Ԫ�غ������
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == m) {
            // �ҵ�Ԫ��m��ɾ����
            for (int j = 0; j < i; j++) {
                printf("%d ", a[j]);
            }
            for (int j = i + 1; j < n; j++) {
                printf("%d ", a[j]);
            }
            break;  // �ҵ���ɾ����һ��ƥ���Ԫ�غ��˳�ѭ��
        }
    }

    // ���û���ҵ�mԪ�أ�����ѡ�����ԭ����
    if (i == n) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j]);
        }
    }

    return 0;
}
