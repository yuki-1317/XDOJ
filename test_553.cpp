#include <stdio.h>
#include <string.h>

int main() {
    char data[201];  // �����洢���������������200���ַ�
    fgets(data, sizeof(data), stdin);
    data[strcspn(data, "\n")] = '\0'; // ȥ��ĩβ�Ļ��з�
    
    int len = strlen(data);
    
    // ����֡ͷ "AAAA" ��λ��
    char *head = strstr(data, "AAAA");
    // ����֡β "BBBB" ��λ��
    char *tail = strstr(data, "BBBB");

    // ���1��֡ͷ��֡β��������
    if (head == NULL && tail == NULL) {
        printf("skip_both\n");
        return 0;
    }
    
    // ���2��ֻ��֡ͷ������
    if (head == NULL) {
        printf("skip_head\n");
        return 0;
    }
    
    // ���3��ֻ��֡β������
    if (tail == NULL) {
        int head_pos = head - data;  // ֡ͷλ��
        // �����֡ͷ��ʼ֮����20���ַ������ "skip_length"
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
    
    // ���4��֡ͷ��֡β������
    if (head < tail) {
        int head_pos = head - data;  // ֡ͷλ��
        int tail_pos = tail - data;  // ֡βλ��
        
        // ���֡β��֡ͷ֮ǰ����û���㹻���ַ�������֮�䣬��� "skip_both"
        if (tail_pos <= head_pos + 3 || tail_pos - head_pos - 4 < 0) {
            printf("skip_both\n");
        } else {
            // ���֡ͷ��֡β֮�������
            for (int i = head_pos + 4; i < tail_pos; i++) {
                printf("%c", data[i]);
            }
            printf("\n");
        }
    } else {
        // ���5�����֡β��֡ͷ֮ǰ���������Ӧ��Ҳ�� "skip_both"��
        printf("skip_both\n");
    }
    
    return 0;
}
