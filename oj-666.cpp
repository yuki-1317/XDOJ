#include<stdio.h>

int main() {
	int a[11][11];
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int b[1024];
	int k = 0;
	int f = 0;
	for (int i = 0; i < m * n; i++) {
		if (k < m) {
			b[i] = a[k][f];
			k++;
		} else {
			i--;
			k = 0;
			f++;
		}
	}
	for (int i = 0; i < m * n - 1; i++) {
		for (int j = 0; j < m * n - i - 1; j++) {
			if (b[j] > b[j + 1]) {
				int tem = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tem;
			}
		}
	}

	int p=m-1;
	int q=0;

	for (int i = 0; i < m * n; i++) {
		if ( q % 2 == 0) {
			a[p][q] = b[i];
			p--;
			if(p<0){
				p=0;
				q++;
			}
		} else if ( q% 2 == 1) {
			a[p][q] = b[i];
			p++;
			if(p==m){
				p=m-1;
				q++;
			}
		} 
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j <  n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
