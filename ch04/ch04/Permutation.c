#include <stdio.h>
#define R 3
int b[R], cnt = 0;

void printPer(void) {
	for (int i = 0; i < R; i++)
		printf("%5d", b[i]);
	printf("\n");
	cnt++;
}

void exchange(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void Premutation(int a[], int n, int r) {
	int i;
	if (r == R) printPer();
	else
		for (i = r; i < n; i++) {
			exchange(a + r, a + i);
			b[r] = a[r];
			Premutation(a, n, r + 1);
			exchange(a + r, a + i);
		}
}

int main(void) {
	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(int);

	Premutation(a, n, 0);
	printf("순열 개수 : %d", cnt);

	return 0;
}