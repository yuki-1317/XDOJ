#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[1000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int tem = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tem;
			}
		}
	}
		printf("%d ",a[0]);
		int shangyige=a[0];
	for(int i=0;i<n-1;i++){
	if(shangyige!=a[i+1]){
		printf("%d ",a[i+1]);
		shangyige=a[i+1];
	}
	}
	return 0;
}
