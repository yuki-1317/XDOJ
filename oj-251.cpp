#include<stdio.h>
typedef struct {
	int year;
	int mouth;
	int day;
} time;

int main() {
	time tt;
	int yy;

	scanf("%d,%d,%d", &tt.year, &tt.mouth, &tt.day);
	if (tt.year % 4 == 0) {
		if (tt.mouth == 1) {
			yy = 0 + tt.day;
		}
		if (tt.mouth == 2) {
			yy = 31 + tt.day;
		}
		if (tt.mouth == 3) {
			yy = 31 + 29 + tt.day;
		}
		if (tt.mouth == 4) {
			yy = 31 + 28 + 31 + tt.day;
		}
		if (tt.mouth == 5) {
			yy = 31 + 28 + 31 + 30 + tt.day;
		}
		if (tt.mouth == 6) {
			yy = 31 + 28 + 31 + 30 + 31 + tt.day;
		}
		if (tt.mouth == 7) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + tt.day;
		}
		if (tt.mouth == 8) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + 31 + tt.day;
		}
		if (tt.mouth == 9) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + tt.day;
		}
		if (tt.mouth == 10) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + tt.day;
		}
		if (tt.mouth == 11) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + tt.day;
		}
		if (tt.mouth == 12) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + tt.day;
		}
	} else {
	if (tt.mouth == 1) {
			yy = 0 + tt.day;
		}
		if (tt.mouth == 2) {
			yy = 31 + tt.day;
		}
		if (tt.mouth == 3) {
			yy = 31 + 28 + tt.day;
		}
		if (tt.mouth == 4) {
			yy = 31 + 28 + 31 + tt.day;
		}
		if (tt.mouth == 5) {
			yy = 31 + 28 + 31 + 30 + tt.day;
		}
		if (tt.mouth == 6) {
			yy = 31 + 28 + 31 + 30 + 31 + tt.day;
		}
		if (tt.mouth == 7) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + tt.day;
		}
		if (tt.mouth == 8) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + 31 + tt.day;
		}
		if (tt.mouth == 9) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + tt.day;
		}
		if (tt.mouth == 10) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + tt.day;
		}
		if (tt.mouth == 11) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + tt.day;
		}
		if (tt.mouth == 12) {
			yy = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + tt.day;
		}
	}
	printf("%d", yy);
	return 0;
}
