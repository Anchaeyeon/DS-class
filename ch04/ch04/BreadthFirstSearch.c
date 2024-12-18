#include <stdio.h>
#define SIZE 8

typedef enum { false, true } bool;

int queue[SIZE];
int rear = -1, front = 0;

void add(int index) {
	queue[++rear] = index;
}

int delete(void) {
	if (rear < front) return -1;
	return queue[front++];
}

void BreadthFirstSearch(char V[], bool G[][SIZE]) {
	int i, j;
	bool searchOK[SIZE] = { false };
	char startVertex;

	printf("출발 정점 : ");
	scanf_s("%c", &startVertex, 1);

	for (i = 0; i < SIZE; i++)
		if (startVertex == V[i])
			break;

	printf("너비 우선 탐색 : %c", startVertex); //V[i] 도 가능
	searchOK[i] = true;

	do {
		for (j = 0; j < SIZE; j++) {
			if (G[i][j] == 1 && searchOK[j] == false) {
				printf("-> %c", V[j]);
				searchOK[j] = 1;
				add(j);
			}
		}
		i = delete();
	} while (i >= 0);
}

int main(void) {
	char V[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
	bool G[SIZE][SIZE] = { {0, 1, 1, 0, 0, 0, 0, 0},
						   {1, 0, 0, 1, 1, 0, 0, 0},
						   {1, 0, 0, 0, 0, 1, 1, 0},
						   {0, 1, 0, 0, 0, 0, 0, 1},
						   {0, 1, 0, 0, 0, 0, 0, 1},
						   {0, 0, 1, 0, 0, 0, 0, 1},
						   {0, 0, 1, 0, 0, 0, 0, 1},
						   {0, 0, 0, 1, 1, 1, 1, 0} };
	BreadthFirstSearch(V, G);
	return 0;
}