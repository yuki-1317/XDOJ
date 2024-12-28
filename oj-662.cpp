#include<stdio.h>
#include<string.h>

int main() {
	int n;
	char a[101];
	scanf("%d", &n);
	getchar();
	fgets(a, sizeof(a), stdin);
	a[strcspn(a,"\n")]='\0';
	int k = 0;
	char b[101];
	int c[101];
	for (int i = 0; i < n; i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			if (i % 2 != 0) {
				b[k] = a[i] - 32;
				c[k] = i;
				k++;
			}
		}
	}
	for (int i = 0; i < k - 1; i++) {
		for (int j = 0; j < k - i-1; j++) {
			if (b[j] > b[j + 1]) {
				char tem = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tem;

			}
		}
	}
	for (int i = 0; i < k; i++) {
		char tem = a[c[i]];
		a[c[i]] = b[i];
		b[i] = tem;
	}


	printf("%s", a);
	return 0;
}
