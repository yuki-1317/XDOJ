#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *compress(char *src) {
    // 分配足够的内存来存储压缩后的字符串
    char *ps = (char*)malloc(200 * sizeof(char));  // 最大长度预估为200
    int k = 0;  // 用于填充结果字符串
    int i = 0;  // 用于遍历源字符串

    while (src[i] != '\0') {
        char curr = src[i];  // 当前字符
        int count = 1;  // 当前字符的计数，至少是1

        // 统计当前字符连续出现的次数
        while (src[i + 1] == curr) {
            count++;
            i++;
        }

        // 将当前字符添加到压缩后的字符串中
        ps[k++] = curr;

        // 如果连续次数大于等于 3，压缩为字符 + 次数
        if (count >= 3) {
            ps[k++] = count + '0';  // 将数字count转换为字符并添加
        }
        
        i++;  // 移动到下一个字符
    }

    ps[k] = '\0';  // 结尾加 '\0' 标记字符串结束
    return ps;
}

int main() {
    char src[100];
    scanf("%s", src);  // 读取源字符串

    char *ps = compress(src);  // 调用压缩函数
    
    puts(ps);  // 输出压缩后的字符串

    // 不再调用 free(ps)，因为题目要求不能修改主函数中释放内存
    // 如果主函数有内存释放的要求，应该在其他地方完成

    return 0;
}
