#include <stdio.h>

int main() {
    int a[31];
    int n = 0;
    
    // 读取数组数据
    while (scanf("%d", &a[n]) == 1) {
        n++;
        if (getchar() == '\n') break; // 如果遇到换行符停止输入
    }

    int m;
    scanf("%d", &m);  // 读取待删除的元素m

    // 输出删除元素后的数组
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == m) {
            // 找到元素m后删除它
            for (int j = 0; j < i; j++) {
                printf("%d ", a[j]);
            }
            for (int j = i + 1; j < n; j++) {
                printf("%d ", a[j]);
            }
            break;  // 找到并删除第一个匹配的元素后退出循环
        }
    }

    // 如果没有找到m元素，可以选择输出原数组
    if (i == n) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j]);
        }
    }

    return 0;
}
