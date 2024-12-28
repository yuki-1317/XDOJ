#include<stdio.h>
#include<string.h>

int main() {
	char a[80];
	scanf("%s", a);
	int m = strlen(a);
	printf("%s\n", a);
	int found = 0;
	for (int i = 0; i < m; i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] = a[i] - 32;
		}
	}
	for (int i = 0; i < m / 2; i++) {

		if (a[i]!=a[m - i +-1]) {
			found = 1;
		}

	}

	if (found == 0) {
		printf("Yes");
	} else {
		printf("No");
	}
	return 0;
}
