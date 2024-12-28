#include<stdio.h>

typedef struct {
	int w;
	int h;
	int a[10][10];
} ss;

int main() {
	ss tt;
	scanf("%d%d", &tt.w, &tt.h);
	for (int i = 0; i < tt.w; i++) {
		for (int j = 0; j < tt.h; j++) {
			scanf("%d\n", &tt.a[i][j]);
		}
	}
	int jiao;
	scanf("%d", &jiao);
	if (jiao == 0) {
		printf("%d %d\n", tt.w, tt.h);
		for (int i = 0; i < tt.w; i++) {
			for (int j = 0; j < tt.h; j++) {
				printf("%d\n", tt.a[i][j]);
			}
		}
	}


if (jiao == 90) {
	printf("%d %d\n", tt.h, tt.w);
	for (int i = 0; i < tt.w; i++) {
		for (int j = 0; j < tt.h; j++) {
			printf("%d\n", tt.a[i][j]);
		}
	}
}
if (jiao == 180) {
	printf("%d %d\n", tt.w, tt.h);
	for (int i = 0; i < tt.w; i++) {
		for (int j = 0; j < tt.h; j++) {
			printf("%d\n", tt.a[i][j]);
		}
	}
}
if (jiao == 270) {
	printf("%d %d\n", tt.h, tt.w);
	for (int i = 0; i < tt.w; i++) {
		for (int j = 0; j < tt.h; j++) {
			printf("%d\n", tt.a[i][j]);
		}
	}

}
return 0;
}
