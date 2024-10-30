#include <stdio.h>
#define SIZE 6

int cqueue[SIZE];
int rear = -1, front = 0, cnt = 0;

int add(int data) {
	if (cnt == SIZE) {
		printf("Circle Queue is Full!\n");
		return -1;
	}
	cnt++;
	cqueue[++rear % SIZE] = data;
	return 0;
}

int delete(void) {
	if (cnt == 0) {
		printf("Circle Queue is Empty!\n");
		return -1;
	}
	cnt--;
	//front 1 증가는 delete() 호출문 종류 직후
	return cqueue[front++ % SIZE];
}

int main(void) {
	add(10); add(20); add(30); add(40); add(50);
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	add(60);
	add(70);
	return 0;
}