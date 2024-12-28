#include<stdio.h>
#include<string.h>
void len(char *a) {
	int k = 0;
	while (*a!='\0') {
	a++;
	k++;
	}

	printf("%d", k);
}

int main() {
	char a[1024];
	scanf("%s", a);
	len(a);
	return 0;
}
