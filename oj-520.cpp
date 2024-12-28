#include<stdio.h>
#include<string.h>

int judge(char next, char arr[100], int m, int n) {
	for (int i = n; i <= m; i++) {
		if (next == arr[i]) {
			return 1;
		}
	}
	return 0;

}

int main() {
	char arr[101];
	scanf("%s",arr);
	int max = 0;

	int shu = strlen(arr);
	for (int i = 0; i < shu; i++) {
		for (int j = i; j < shu; j++) {
			int num = judge(arr[j + 1], arr, j, i);
			if (num == 1) {
				if (j - i + 1 > max) {
					max = j - i + 1;

				}
				break;
			}
			if (j == shu - 1 && num == 0) {
				if (j - i + 1 > max) {
					max = j - i + 1;

				}
				break;
			}
		}
	}

	printf("%d", max);
	return 0;
}
