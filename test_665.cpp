#include <stdio.h>
#include <stdlib.h>  // 用于qsort

// 比较函数，供 qsort 使用
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int a[11][11];
    int m, n;
    scanf("%d %d", &m, &n);

    // 输入矩阵
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int b[1024];
    int k = 0;
    int f = 0;
    // 按列优先将元素存入 b 数组
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

    // 对 b 数组进行排序
    qsort(b, m * n, sizeof(int), compare);

    int p = m - 1;
    int q = m - 1;
    
    // 按照奇偶行列顺序将排序后的元素填回矩阵
    for (int i = 0; i < m * n; i++) {
        if ((m - 1 - p) % 2 == 0) {  // 偶数行
            a[q][p] = b[i];
            p--;
            if (p < 0) {
                p = 0;
                q--;
            }
        } else {  // 奇数行
            a[p][q] = b[i];
            p++;
            if (p == m) {
                p = m - 1;
                q--;
            }
        }
    }

    // 输出排序后的矩阵
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
