#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    int rowMin[m];
    int colMax[n];
    int i, j;

    // 读取矩阵元素
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 初始化行最小值和列最大值数组
    for (i = 0; i < m; i++) {
        rowMin[i] = a[i][0];
    }
    for (j = 0; j < n; j++) {
        colMax[j] = a[0][j];
    }

    // 找出每行的最小值
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] < rowMin[i]) {
                rowMin[i] = a[i][j];
            }
        }
    }

    // 找出每列的最大值
    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            if (a[i][j] > colMax[j]) {
                colMax[j] = a[i][j];
            }
        }
    }

    // 检查马鞍点
    int found = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] == rowMin[i] && a[i][j] == colMax[j]) {
                printf("%d %d %d\n", i, j, a[i][j]);
                found = 1;
            }
        }
    }

    // 如果没有找到马鞍点，输出"no"
    if (!found) {
        printf("no\n");
    }

    return 0;
}
