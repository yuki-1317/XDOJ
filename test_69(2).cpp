#include<stdio.h>

int main() {
    int a[100][100];
    int m, n;
    scanf("%d%d", &m, &n);
    
    // 输入矩阵
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int x, y;  // 用于记录序列的起始和结束位置
    int max_len, current_len;  // 最大序列长度和当前序列长度
    
    // 遍历每一行
    for (int i = 0; i < m; i++) {
        x = -1;  // 初始化x，表示起始位置
        y = -1;  // 初始化y，表示结束位置
        max_len = 0;  // 初始化最大序列长度为0
        current_len = 0;  // 初始化当前序列长度

        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                if (current_len == 0) {
                    x = j;  // 记录当前序列的起始位置
                }
                current_len++;  // 当前序列长度增加

                if (current_len > max_len) {
                    max_len = current_len;
                    y = j;  // 更新最长序列的结束位置
                }
            } else {
                current_len = 0;  // 遇到0时重置当前序列长度
            }
        }

        // 判断是否找到了至少两个连续的1
        if (max_len >= 2) {
            printf("%d %d\n", x, y);
        } else {
            printf("-1 -1\n");  // 没有找到至少两个连续的1
        }
    }

    return 0;
}
