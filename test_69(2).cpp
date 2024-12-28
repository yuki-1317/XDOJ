#include<stdio.h>

int main() {
    int a[100][100];
    int m, n;
    scanf("%d%d", &m, &n);
    
    // �������
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int x, y;  // ���ڼ�¼���е���ʼ�ͽ���λ��
    int max_len, current_len;  // ������г��Ⱥ͵�ǰ���г���
    
    // ����ÿһ��
    for (int i = 0; i < m; i++) {
        x = -1;  // ��ʼ��x����ʾ��ʼλ��
        y = -1;  // ��ʼ��y����ʾ����λ��
        max_len = 0;  // ��ʼ��������г���Ϊ0
        current_len = 0;  // ��ʼ����ǰ���г���

        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                if (current_len == 0) {
                    x = j;  // ��¼��ǰ���е���ʼλ��
                }
                current_len++;  // ��ǰ���г�������

                if (current_len > max_len) {
                    max_len = current_len;
                    y = j;  // ��������еĽ���λ��
                }
            } else {
                current_len = 0;  // ����0ʱ���õ�ǰ���г���
            }
        }

        // �ж��Ƿ��ҵ�����������������1
        if (max_len >= 2) {
            printf("%d %d\n", x, y);
        } else {
            printf("-1 -1\n");  // û���ҵ���������������1
        }
    }

    return 0;
}
