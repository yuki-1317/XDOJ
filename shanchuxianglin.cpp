#include<stdio.h>
#include<string.h>

int main() {
	char a[105];
	char b[105];
	scanf("%s", a);
	int s = strlen(a);
	int i;
	for ( i = 0; i < s-1; i++) {
		if (a[i] == a[i + 1]) {
			s = s - 2;
			for (int j = 0; j < i; j++) {
				b[j] = a[j];
			}
			for (int j = i; j < s; j++) {
				b[j] = a[j + 2];
			}
			b[s]='\0';
			strcpy(a,b);
			i=-1;
		}
	}
	printf("%s", b);
	return 0;
}
