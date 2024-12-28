#include <stdio.h>

void printFactorial(int n);

int main() {
	int n;
	scanf("%d", &n);
	printFactorial(n);

	return 0;
}
void printFactorial(int n) {
	double sum = 1.0; 
	for (int i = 1; i <= n; i++) {
		sum = sum * i;
	}
	if (n <= 1000 && n >= 0) {
		printf("%.0f", sum);	} else {
		printf("Invalid input");
	}

}
