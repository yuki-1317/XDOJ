#include<stdio.h>

int main() {
    // ������Ԫ�� q1, q2, q3, q4
    double q1, q2, q3, q4;
    scanf("%lf, %lf, %lf, %lf", &q1, &q2, &q3, &q4);

    // ������ת���� R
    double R11 = 1 - 2 * (q2 * q2 + q3 * q3);
    double R12 = 2 * (q1 * q2 - q3 * q4);
    double R13 = 2 * (q1 * q3 + q2 * q4);

    double R21 = 2 * (q1 * q2 + q3 * q4);
    double R22 = 1 - 2 * (q1 * q1 + q3 * q3);
    double R23 = 2 * (q2 * q3 - q1 * q4);

    double R31 = 2 * (q1 * q3 - q2 * q4);
    double R32 = 2 * (q2 * q3 + q1 * q4);
    double R33 = 1 - 2 * (q1 * q1 + q2 * q2);

    // �����ת���� R��ÿ������֮��ո�ָ�
    printf("%.6lf %.6lf %.6lf\n", R11, R12, R13);
    printf("%.6lf %.6lf %.6lf\n", R21, R22, R23);
    printf("%.6lf %.6lf %.6lf\n", R31, R32, R33);

    return 0;
}
