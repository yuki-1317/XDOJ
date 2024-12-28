#include<stdio.h>

int main() {
    int m;
    int a[1024];
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    // 初始化最大值和最小值的索引
    int maxIndex = 0, minIndex = 0;
    int max = a[0], min = a[0];

    // 寻找最大值和最小值的索引
    for (int i = 1; i < m; i++) {
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
        if (a[i] < min) {
            min = a[i];
            minIndex = i;
        }
    }

    // 如果最大值和最小值不是同一个元素，则交换它们
    if (maxIndex != minIndex) {
        int temp = a[maxIndex];
        a[maxIndex] = a[minIndex];
        a[minIndex] = temp;
    }

    // 输出结果
    for (int i = 0; i < m; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); // 输出换行

    return 0;
}
