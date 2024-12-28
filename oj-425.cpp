#include<stdio.h>
int cat(int n) {
	unsigned  sum = 1;
	for (int i = 1; i <= n; i++) {
		sum = sum * i;
	}
	return sum;
}

int floor(int n) {
	unsigned int k = 0;
	for (int i = 0; i <= n; i++) {
		k = cat(n) / (cat(i) * cat(n - i)) + k;
	}
	return k;
}
int main() {
	int n;
	unsigned int sum = 0;
	scanf("%d", &n);
	if (n % 3 == 0) {
		sum = floor(n / 3);
	}
	if ((n - 1) % 3 == 0) {
		for (int i = 0; i <= n; i++) {
			sum = (cat(n) / (cat(i) * cat(n - i)) * cat((n-1)/3-i) / (cat((n-1)/3-i-1) * cat(1))) + sum;
		}

	}
	if ((n - 2) % 3 == 0) {
		for (int i = 0; i <= n; i++) {
			sum = (cat(n) / (cat(i) * cat(n - i)) * cat((n-2)/3-i) / (cat((n-2)/3-i-2) * cat(2))) + sum;
		}

	}
	printf("%d", sum);
	return 0;
}
