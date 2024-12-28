#include <stdio.h>
#include <string.h>

int main() {
    char data[201];  // 用来存储输入数据流，最多200个字符
    fgets(data, sizeof(data), stdin);
    data[strcspn(data, "\n")] = '\0'; // 去除末尾的换行符
    
    int len = strlen(data);
    
    // 查找帧头 "AAAA" 的位置
    char *head = strstr(data, "AAAA");
    // 查找帧尾 "BBBB" 的位置
    char *tail = strstr(data, "BBBB");

    // 情况1：帧头和帧尾都不存在
    if (head == NULL && tail == NULL) {
        printf("skip_both\n");
        return 0;
    }
    
    // 情况2：只有帧头不存在
    if (head == NULL) {
        printf("skip_head\n");
        return 0;
    }
    
    // 情况3：只有帧尾不存在
    if (tail == NULL) {
        int head_pos = head - data;  // 帧头位置
        // 如果从帧头开始之后不足20个字符，输出 "skip_length"
        if (head_pos + 4 + 20 > len) {
            printf("skip_length\n");
        } else {
            for (int i = head_pos + 4; i < head_pos + 4 + 20; i++) {
                printf("%c", data[i]);
            }
            printf("\n");
        }
        return 0;
    }
    
    // 情况4：帧头和帧尾都存在
    if (head < tail) {
        int head_pos = head - data;  // 帧头位置
        int tail_pos = tail - data;  // 帧尾位置
        
        // 如果帧尾在帧头之前或者没有足够的字符在两者之间，输出 "skip_both"
        if (tail_pos <= head_pos + 3 || tail_pos - head_pos - 4 < 0) {
            printf("skip_both\n");
        } else {
            // 输出帧头和帧尾之间的数据
            for (int i = head_pos + 4; i < tail_pos; i++) {
                printf("%c", data[i]);
            }
            printf("\n");
        }
    } else {
        // 情况5：如果帧尾在帧头之前（这种情况应该也是 "skip_both"）
        printf("skip_both\n");
    }
    
    return 0;
}
