#include<stdio.h>
unsigned long long fact(int n) {
	unsigned long long sum = 1;
	for (int i = 1; i <= n; i++) {
		sum = sum * i;
	}
	return sum;
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%llu ", fact(i));
	}
	return 0;
}
