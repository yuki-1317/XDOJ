#include <stdio.h>

int main() {
    int day, rate, num;
    int found = 1; // ���ڱ���Ƿ����У�1 ��ʾ���У�0 ��ʾ������
    scanf("%d%d%d", &day, &rate, &num);
    num = num % 10; // ֱ����ȡģ���㳵�ƺŵ����һλ

    // �����ղ�����
    if (day == 6 || day == 7) {
        printf("%d no", num);
        return 0;
    }

    // ���� rate �ж����й���
    if (rate < 200) {
        printf("%d no", num); // ����ָ��С�� 200 ������
    } 
    else if (rate >= 200 && rate < 400) {
        // 200 <= rate < 400 �����й���
        if ((day == 1 && (num == 1 || num == 6)) ||
            (day == 2 && (num == 2 || num == 7)) ||
            (day == 3 && (num == 3 || num == 8)) ||
            (day == 4 && (num == 4 || num == 9)) ||
            (day == 5 && (num == 5 || num == 0))) {
            printf("%d yes", num);
        } else {
            printf("%d no", num);
        }
    } 
    else { // rate >= 400
        // rate >= 400 �����й���
        if ((day % 2 == 1 && num % 2 == 1) || // ��������������β��
            (day % 2 == 0 && num % 2 == 0)) { // ż��������ż��β��
            printf("%d yes", num);
        } else {
            printf("%d no", num);
        }
    }

    return 0;
}
