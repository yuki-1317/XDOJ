#include<stdio.h>
typedef struct {
	char name[20];
	int s1;
	int s2;
	int s3;
	int s4;
	int s5;
	int s6;
} SYS;
int main() {
	SYS a[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s%d%d%d%d%d%d", a[i].name, &a[i].s1, &a[i].s2, &a[i].s3, &a[i].s4, &a[i].s5, &a[i].s6);
	}
	int b[100];
	for (int i = 0; i < n; i++) {
		b[i] = a[i].s1 + a[i].s2 + a[i].s3 + a[i].s4 + a[i].s5 + a[i].s6;
	}
	for (int i = 0; i < n - 1; i++) {

		for (int j = 0; j < n - i - 1; j++) {
			if (b[j]  != b[j + 1] ) {
				if (b[j] < b[j + 1]) {
					SYS temper = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temper;
					int tem = b[j];
					b[j] = b[j + 1];
					b[j + 1] = tem;
				}

			}
			if (b[j]  == b[j + 1] ) {
				if (a[j].s6 < a[j + 1].s6) {
					SYS temper = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temper;
					int tem = b[j];
					b[j] = b[j + 1];
					b[j + 1] = tem;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%s %d %d\n", a[i].name, b[i], a[i].s6);
	}
	return 0;
}
