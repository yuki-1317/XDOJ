#include<stdio.h>

int judge(int n, int arr[100], int k) {
	int found = 1;
	for (int i = 0; i < k; i++) {
		if (arr[i] == n) {
			found = 0;
		}
	}
	return found;
}

int main() {
	int num, n;
	scanf("%d%d", &num, &n);
	int arr[100];
	int guss;
	int biao=0;
	int k = 0;
	while (guss >= 0) {
		while (k < n || (k > n && judge(num, arr, k) == 0)) {
			scanf("%d", &guss);
			arr[k] = guss;
			if (guss < 0) {
				break;
			}
			k++;
		}
		break;

	}
	if (judge(num, arr, k) == 1) {
	biao=1;
	} 
		for (int i = 0; i < k; i++) {
			if (arr[i] > num) {
				printf("Too big\n");
			} else if (arr[i] < num) {
				printf("Too small\n");
			} else if (arr[i] == num) {

				if (i == 0) {
					printf("Bingo!");
				} else if (i > 0 && i <= 2) {
					printf("Lucky You!");
				} else if (i > 2 && i < n) {
					printf("Good Guess!");
				}
				break;
			}
		}
	if(biao==1){
		printf("Game Over");
	}
	return 0;
}
