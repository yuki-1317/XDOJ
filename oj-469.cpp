#include<stdio.h>
#include<string.h>

int main() {
	int n;
	scanf("%d", &n);
	char m[100][20];
	for (int i = 0; i < n; i++) {
		scanf(" %s", m[i]);
	}
	char k;
	scanf(" %c", &k);
	char w[100][20];
	int found = 0;
	for (int i = 0; i < n; i++) {
		if (m[i][0] == k) {
		strcpy(w[found],m[i]);
		found++;
		}
	}
	int q[5]={0};
	int l=0;
	for(int i=0;i<found;i++){
		if(strcmp(w[i],q[0])&&strcmp(w[i],q[1])&&strcmp(w[i],q[2])&&strcmp(w[i],q[3])&&strcmp(w[i],q[4])){
			q[l]=w[i];
			l++;
		}
	}
	
	int r;
	for (int i = 0; i < found; i++) {
		r = 0;
		for (int j = 0; j < n; j++) {
			if (strcmp(m[j], w[i]) == 0) {
				r++;
			}
			q[i] = r;
		}

	}
	for (int i = 0; i < found; i++) {
		for (int j = 0; j < found - i - 1; j++) {
			if (q[i] < q[i + 1]) {
				char tem[20];
				strcpy(tem, w[i]);
				strcpy(w[i], w[i + 1]);
				strcpy(w[i + 1], tem);
				int te = q[i];
				q[i] = q[i + 1];
				q[i + 1] = te;
			}
		}
	}
	for (int i = 0; i < found; i++) {
		printf("%s\n", w[i]);
	}
	return 0;
}
