#include <stdio.h>

int main() {
    int day, rate, num;
    int found = 1; // 用于标记是否限行，1 表示限行，0 表示不限行
    scanf("%d%d%d", &day, &rate, &num);
    num = num % 10; // 直接用取模计算车牌号的最后一位

    // 周六日不限行
    if (day == 6 || day == 7) {
        printf("%d no", num);
        return 0;
    }

    // 根据 rate 判断限行规则
    if (rate < 200) {
        printf("%d no", num); // 雾霾指数小于 200 不限行
    } 
    else if (rate >= 200 && rate < 400) {
        // 200 <= rate < 400 的限行规则
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
        // rate >= 400 的限行规则
        if ((day % 2 == 1 && num % 2 == 1) || // 奇数日限行奇数尾号
            (day % 2 == 0 && num % 2 == 0)) { // 偶数日限行偶数尾号
            printf("%d yes", num);
        } else {
            printf("%d no", num);
        }
    }

    return 0;
}
