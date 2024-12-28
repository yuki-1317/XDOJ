#include<stdio.h>
#include<string.h>

int main() {
	char a[51];
	fgets(a, sizeof(a), stdin);
	a[strcspn(a, "\n")] = '\0';
	int t = strlen(a);
	int found = 0;
	for (int i = 0; i < t; i++) {
		if (a[i] != a[t -1- i]) {
			found = 1;
		}
	}
	if (found == 0) {
		printf("yes");
	} else {printf("no");}
	
	return 0;
}
