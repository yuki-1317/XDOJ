#include<stdio.h>
#include<string.h>

int main() {
	int n;
	scanf("%d", &n);
	char m[101];
	char c1, c2;
	scanf("%s %c %c", m, &c1, &c2);
	int k = strlen(m);
	int h = 0;
	for (int i = 0; i <= k - n; i++) {
		if (m[i] == c1) {
			for (int j = i + n-1; j <= k; j++) {
				if (m[j] == c2) {
					h++;
				}
			}
		}
	}
	printf("%d", h);
	return 0;
}
