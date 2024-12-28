#include<stdio.h>
typedef struct {
	char name[20];
	int s;
} ss;

int main() {
	ss hit[1024];int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s%d",hit[i].name,&hit[i].s);
	}
	int f = 0;
	int s = 0;
	int t = 0;
	for(int i=0;i<n;i++){
		
	if (hit[i].s >= 80) {
		f++;
	}
	if (hit[i].s >= 60 && hit[i].s < 80) {
		s++;
	}
	if (hit[i].s < 60) {
		t++;
	}
	}
	printf("%d %d %d", f, s, t);
}
