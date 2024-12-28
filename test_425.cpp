#include <stdio.h>

int countWays(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n == 3) return 2;

    int dp1 = 1, dp2 = 1, dp3 = 2, current = 0;

    for (int i = 4; i <= n; i++) {
        current = dp3 + dp1;
        dp1 = dp2;
        dp2 = dp3;
        dp3 = current;
    }

    return dp3;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countWays(n));
    return 0;
}

