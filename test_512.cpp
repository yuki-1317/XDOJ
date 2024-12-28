#include <stdio.h>
#include <string.h>

typedef struct {
    char name[31];  // �������30���ַ�������һ���ս�� '\0'
    float price;    // �۸�
} Book;

int main() {
    int n;
    scanf("%d", &n);  // �����鼮������
    getchar();  // ���ջ��з�

    Book books[1024];
    for (int i = 0; i < n; i++) {
        fgets(books[i].name, 31, stdin);  // ����������֧�ֿո�
        books[i].name[strcspn(books[i].name, "\n")] = '\0';  // ȥ�������еĻ��з�
        scanf("%f", &books[i].price);  // ����۸�
        getchar();  // ���ջ��з�
    }

    // ��ʼ��������Сֵ
    float maxPrice = -1.0, minPrice = 1e9;  
    int maxIndex = -1, minIndex = -1;

    // ������ߺ���ͼ۸�
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

    // ���������۸�����λС��
    printf("%.2f, %s\n", maxPrice, books[maxIndex].name);
    printf("%.2f, %s\n", minPrice, books[minIndex].name);

    return 0;
}
