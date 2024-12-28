#include<stdio.h>
#include<string.h>

int main() {
	char str[10][20];
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {

		scanf("%s", str[i]);

	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			int k = 0;
			if (str[j][k] > str[j + 1][k]) {
				char tem[20];
				strcpy(tem, str[j]);
				strcpy(str[j], str[j + 1]);
				strcpy(str[j + 1], tem);
			}

			if (str[j][k] == str[j + 1][k]) {
				k++;
				if (str[j][k] > str[j + 1][k]) {
					char tem[20];
					strcpy(tem, str[j]);
					strcpy(str[j], str[j + 1]);
					strcpy(str[j + 1], tem);
				}
			}
		}

	}

	for (int i = 0; i < n; i++) {
		printf("%s\n", str[i]);
	}
	return 0;
}
