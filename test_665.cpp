#include <stdio.h>
#include <stdlib.h>  // ����qsort

// �ȽϺ������� qsort ʹ��
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int a[11][11];
    int m, n;
    scanf("%d %d", &m, &n);

    // �������
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int b[1024];
    int k = 0;
    int f = 0;
    // �������Ƚ�Ԫ�ش��� b ����
    for (int i = 0; i < m * n; i++) {
        if (k < m) {
            b[i] = a[k][f];
            k++;
        } else {
            i--;
            k = 0;
            f++;
        }
    }

    // �� b �����������
    qsort(b, m * n, sizeof(int), compare);

    int p = m - 1;
    int q = m - 1;
    
    // ������ż����˳��������Ԫ����ؾ���
    for (int i = 0; i < m * n; i++) {
        if ((m - 1 - p) % 2 == 0) {  // ż����
            a[q][p] = b[i];
            p--;
            if (p < 0) {
                p = 0;
                q--;
            }
        } else {  // ������
            a[p][q] = b[i];
            p++;
            if (p == m) {
                p = m - 1;
                q--;
            }
        }
    }

    // ��������ľ���
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
