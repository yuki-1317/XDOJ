#include<stdio.h>
int p = 0;
void output(int n) {
	int found1;
	int p = 0;
	int a[100000];
	for (int i = 2; i <= n; i++) {
		found1 = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				found1 = 1;
			}
		}
		if(found1==0){
			a[p] = i;
			p++;
		}
	}

	int found = 0;
	for (int i = 0; i < p; i++) {
		for (int j = 0; j <= p; j++) {
			if (a[j] - a[i] == 2&&j>i) {
				printf("%d %d\n", a[i], a[j]);
				found = 1;
			}
		}

	}
	if (found == 0) {
		printf("empty");

	}
}
int main() {
	int n;
	scanf("%d", &n);
	output(n);
	return 0;
}
