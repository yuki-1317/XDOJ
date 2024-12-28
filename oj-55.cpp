#include<stdio.h>
int a[1024] = {2, 3};
int b[1024] = {1, 2};
float A(int n) {
	for (int i = 0; i < n - 2; i++) {
		a[i + 2] = a[i + 1] + a[i];
	}
	return a[n - 1];
}

float B(int n) {
	for (int i = 0; i < n - 2; i++) {
		b[i + 2] = b[i + 1] + b[i];
	}
	return b[n - 1];
}

int main() {
	float sum = 0;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		sum = sum + A(i + 1) / B(i + 1);
	}
	printf("%.2f", sum);
	return 0;
}
