#include<stdio.h>
#include<string.h>
typedef struct {
	char name[1024];
	float price;
} ss;
int main() {
	int n;
	scanf("%d", &n);
	ss a[1024];
	 for (int i = 0; i < n; i++) {
	         scanf("%s",a[i].name);
	         scanf("%f",&a[i].price);
			               
	     }
	float max = -1;
	float min = 1024;
	int jihao1;
	int jihao2;
	for (int i = 0; i < n; i++) {
		if (a[i].price > max) {
			max = a[i].price;
			jihao1 = i;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i].price < min) {
			min = a[i].price;
			jihao2 = i;
		}
	}
	printf("%.2f,%s\n", max, a[jihao1].name);
	printf("%.2f,%s\n", min, a[jihao2].name);
	return 0;
}
