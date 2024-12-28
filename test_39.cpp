#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    int rowMin[m];
    int colMax[n];
    int i, j;

    // ��ȡ����Ԫ��
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // ��ʼ������Сֵ�������ֵ����
    for (i = 0; i < m; i++) {
        rowMin[i] = a[i][0];
    }
    for (j = 0; j < n; j++) {
        colMax[j] = a[0][j];
    }

    // �ҳ�ÿ�е���Сֵ
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] < rowMin[i]) {
                rowMin[i] = a[i][j];
            }
        }
    }

    // �ҳ�ÿ�е����ֵ
    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            if (a[i][j] > colMax[j]) {
                colMax[j] = a[i][j];
            }
        }
    }

    // �������
    int found = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] == rowMin[i] && a[i][j] == colMax[j]) {
                printf("%d %d %d\n", i, j, a[i][j]);
                found = 1;
            }
        }
    }

    // ���û���ҵ����㣬���"no"
    if (!found) {
        printf("no\n");
    }

    return 0;
}
