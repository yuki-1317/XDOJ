#include <stdio.h>

int main() {
    int a[30];  // 数列最大长度为30
    int n = 0;  // 数列的实际元素个数
    
    // 读取数列
    while (scanf("%d", &a[n]) == 1) {
        n++;
        char ch = getchar();  // 读取空格或换行
        if (ch == '\n') break;  // 遇到换行符停止输入
    }

    int m;
    scanf("%d", &m);  // 读取参考值 m

    // 新数组索引，用于存储删除 m 后的数列
    int new_size = 0;

    // 遍历原数组，将不等于 m 的元素移到数组前面
    for (int i = 0; i < n; i++) {
        if (a[i] != m) {
            a[new_size] = a[i];
            new_size++;
        }
    }

    // 输出处理后的数组
    for (int i = 0; i < new_size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
