#include <stdio.h>

int cnt = 0;
int binarySearch(int a[], int n, int key) {
	int left = 0, right = n - 1, mid;
	while (left <= right) {
		cnt++;
		mid = (left + right) / 2;
		if (key == a[mid])
			return mid;
		if (key > a[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}

int main(void) {
	int a[] = { 3, 7, 10, 12, 14, 18, 21, 33, 35, 48 };
	int n = sizeof(a) / sizeof(int);
	int key, index;

	printf("ã�� �� : ");
	scanf_s("%d", &key);

	index = binarySearch(a, n, key);

	if (index >= 0)
		printf("%d��(��) %d ��ġ���� %dȸ ���Ͽ� ã��!\n", key, index, cnt);
	else
		printf("%d�� ���� �ڷ���!\n", key);
}