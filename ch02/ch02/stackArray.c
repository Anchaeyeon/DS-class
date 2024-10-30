#include <stdio.h>
#define SIZE 6

int top = -1;
int stack[SIZE];

int pop(void) {
	if (top == 1) {
		printf("Stack is Empty!\n");
		return -1;
	}
	return stack[top--];
}

int push(int data) {
	if (top == SIZE - 1) {
		printf("Stack is Full!\n");
		return -1;
	}
	stack[++top] = data;
	return 0;
}

int main(void) {
	push(10); push(20); push(30); push(40); push(50); push(60);
	push(70); //overflow
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	return 0;
}