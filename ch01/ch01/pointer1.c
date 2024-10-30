#include <stdio.h>

int main(void) {
	int k = 23;
	int* ptr = &k;

	printf("k = %d\n", k);
	printf("&k = %p\n", &k);
	printf("ptr = %p\n", ptr);
	printf("*ptr = %d\n", *ptr);

	printf("&ptr = %p\n", &ptr);
	printf("%d\n", sizeof(ptr));
	return 0;
}