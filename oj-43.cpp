#include<stdio.h>

int main() {
	int arr[10];
	int n;
	scanf("%d", &n);
	//ÊäÈë
	int num = 0;
	int max = -1;
	int min = 10;

	if (n == 0) {
		printf("1 0 0");
	} else {
		while (n != 0) {
			arr[num] = n % 10;
			if (arr[num] > max) {
				max = arr[num];
			}
			if (arr[num] < min) {
				min = arr[num];
			}
			num++;
			n = n / 10;

		}
		printf("%d %d %d", num, max, min);
	}
	return 0;
}
