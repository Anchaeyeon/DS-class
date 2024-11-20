#include <stdio.h>
#define R 3
int b[R], cnt = 0;

void printRePer(void) {
	for (int i = 0; i < R; i++)
		printf("%5d", b[i]);
	printf("\n");
	cnt++;
}

void RePremutation(int a[], int n, int r) {
	int i;
	if (r==R) printRePer();
	else
		for (i = 0; i < n; i++) {
			b[r] = a[i];
			RePremutation(a, n, r + 1);
		}
}

int main(void) {
	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(int);

	RePremutation(a, n, 0);

	printf("중복 수열 개수 : %d", cnt);

	return 0;
}