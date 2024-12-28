#include<stdio.h>
#include<string.h>

int main() {
	char a[100];
	char b[100];
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);
	a[strcspn(a, "\n")] = '\0';
	b[strcspn(b, "\n")] = '\0';
	float s1 = strlen(a);
	float s2 = strlen(b);
	for(int i=0;i<s1;i++){
		if(a[i]>'a'&&a[i]<'z'){
			a[i]=a[i]-32;
		}
	}
	for(int i=0;i<s2;i++){
			if(b[i]>'a'&&b[i]<'z'){
				b[i]=b[i]-32;
			}
		}
	
	float similer[100];
	int tem = -1;
	int i, j;
	for (i = 0; i < s1 ; i++) {
		for ( j = 0; j < s2 ; j++) {
			if (a[i] == b[j]) {
				tem++;
				int p = 1;
				while(i+1<s1&&j+1<s2&&a[i+1]==b[j+1]){
					p++;
				}
				similer[tem] = p;
			}
		}
	}
	float max = 0;
	for (int i = 0; i < tem+1; i++) {
		if (similer[i] > max) {
			max = similer[i];
		}
	}

	float output;
	output = 2 * max / (s1 + s2);
	printf("%.3f", output);

	return 0;
}
