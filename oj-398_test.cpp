#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *compress(char *src) {
    // �����㹻���ڴ����洢ѹ������ַ���
    char *ps = (char*)malloc(200 * sizeof(char));  // ��󳤶�Ԥ��Ϊ200
    int k = 0;  // ����������ַ���
    int i = 0;  // ���ڱ���Դ�ַ���

    while (src[i] != '\0') {
        char curr = src[i];  // ��ǰ�ַ�
        int count = 1;  // ��ǰ�ַ��ļ�����������1

        // ͳ�Ƶ�ǰ�ַ��������ֵĴ���
        while (src[i + 1] == curr) {
            count++;
            i++;
        }

        // ����ǰ�ַ���ӵ�ѹ������ַ�����
        ps[k++] = curr;

        // ��������������ڵ��� 3��ѹ��Ϊ�ַ� + ����
        if (count >= 3) {
            ps[k++] = count + '0';  // ������countת��Ϊ�ַ������
        }
        
        i++;  // �ƶ�����һ���ַ�
    }

    ps[k] = '\0';  // ��β�� '\0' ����ַ�������
    return ps;
}

int main() {
    char src[100];
    scanf("%s", src);  // ��ȡԴ�ַ���

    char *ps = compress(src);  // ����ѹ������
    
    puts(ps);  // ���ѹ������ַ���

    // ���ٵ��� free(ps)����Ϊ��ĿҪ�����޸����������ͷ��ڴ�
    // ������������ڴ��ͷŵ�Ҫ��Ӧ���������ط����

    return 0;
}
