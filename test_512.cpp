#include <stdio.h>
#include <string.h>

typedef struct {
    char name[31];  // 书名最多30个字符，加上一个终结符 '\0'
    float price;    // 价格
} Book;

int main() {
    int n;
    scanf("%d", &n);  // 输入书籍的数量
    getchar();  // 吸收换行符

    Book books[1024];
    for (int i = 0; i < n; i++) {
        fgets(books[i].name, 31, stdin);  // 输入书名，支持空格
        books[i].name[strcspn(books[i].name, "\n")] = '\0';  // 去掉书名中的换行符
        scanf("%f", &books[i].price);  // 输入价格
        getchar();  // 吸收换行符
    }

    // 初始化最大和最小值
    float maxPrice = -1.0, minPrice = 1e9;  
    int maxIndex = -1, minIndex = -1;

    // 查找最高和最低价格
    for (int i = 0; i < n; i++) {
        if (books[i].price > maxPrice) {
            maxPrice = books[i].price;
            maxIndex = i;
        }
        if (books[i].price < minPrice) {
            minPrice = books[i].price;
            minIndex = i;
        }
    }

    // 输出结果，价格保留两位小数
    printf("%.2f, %s\n", maxPrice, books[maxIndex].name);
    printf("%.2f, %s\n", minPrice, books[minIndex].name);

    return 0;
}
