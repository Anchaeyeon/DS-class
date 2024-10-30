#include <stdio.h>

void HanoiTower(int n, char a, char b, char c) { //n은 원판개수, a는 출발지 변수, b는 경유지 변수, c는 도착지 변수
	if (n == 1)
		printf("원판 %d, %c -> %c\n", n, a, c); //n은 원판 번호
	else {
		HanoiTower(n - 1, a, c, b);
		printf("원판 %d, %c -> %c\n", n, a, c); //n은 원판 번호
		HanoiTower(n - 1, b, a, c);
	}
}

int main(void) {
	int n = 4;
	HanoiTower(n, 'A', 'B', 'C'); //'A'는 최초의 출발지, 'B'는 경유지, 'C"는 도착지
	return 0;
}