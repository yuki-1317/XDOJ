#include<stdio.h>
int compare(int x, int y) {
	if (x%2==0&&y%2==1) {
		return 1;
	}
	else if(x%2==1&&y%2==0){
		return -1;
	}
	if(x%2==y%2){
	if(x>y){
		return 1;
	}
	else if (x < y) {
		return -1;
	} else {
		return 0;
	} 
	}
}

int main() {
	int a[100] = {0};
	int n, i, j, k;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (k = i, j = i + 1; j < n; j++) {
			if (compare(a[j], a[k]) > 0) k = j;
		}
		if (k != i) {
			int t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
