#include<stdio.h>

int main() {
    int n, m, t, k;
    scanf("%d %d %d %d", &n, &m, &t, &k); // 输入行·列·区块数量·目标区块
    int a[100][100]; // 引入二维数组
    int pan[100] = {0}; // 用于记录相邻区域是否已访问过

    // 读取矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int x[1024], y[1024]; // 记录目标区域k的所有坐标
    int o = 0; // 用于记录x和y数组的索引
    int sum = 0; // 记录相邻区域的数量

    // 找到所有属于区域k的单元格，并记录它们的坐标
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == k) {
                x[o] = i;
                y[o] = j;
                o++;
            }
        }
    }

    // 遍历所有属于区域k的单元格，检查它们的相邻单元格
    for (int i = 0; i < o; i++) {
        int cx = x[i]; // 当前k区域的行坐标
        int cy = y[i]; // 当前k区域的列坐标

        // 检查上方相邻单元格
        if (cx > 0 && a[cx - 1][cy] != k && pan[a[cx - 1][cy]] == 0) {
            pan[a[cx - 1][cy]] = 1; // 标记相邻区域
            sum++; // 计数
        }

        // 检查下方相邻单元格
        if (cx < n - 1 && a[cx + 1][cy] != k && pan[a[cx + 1][cy]] == 0) {
            pan[a[cx + 1][cy]] = 1;
            sum++;
        }

        // 检查左方相邻单元格
        if (cy > 0 && a[cx][cy - 1] != k && pan[a[cx][cy - 1]] == 0) {
            pan[a[cx][cy - 1]] = 1;
            sum++;
        }

        // 检查右方相邻单元格
        if (cy < m - 1 && a[cx][cy + 1] != k && pan[a[cx][cy + 1]] == 0) {
            pan[a[cx][cy + 1]] = 1;
            sum++;
        }
    }

    // 输出相邻区域的数量
    printf("%d\n", sum);
    return 0;
}
