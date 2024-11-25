#include <stdio.h>
#define R 3
int b[R], cnt = 0;

void printRePer(void) {
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

void RePremutation(int a[], int n, int r) {
	int i;
	if (r == R) printRePer();
	else
		for (i = 0; i < n; i++) {
			exchange(&a[0], &a[i]); //a+0, a+i도 가능
			b[r] = a[0];
			RePremutation(a, n, r + 1);
			exchange(a + 0, a + i);
		}
}

int main(void) {
	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(int);

	RePremutation(a, n, 0);
	printf("중복 수열 개수 : %d", cnt);

	return 0;
}