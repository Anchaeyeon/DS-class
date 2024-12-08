#include <stdio.h>
#define R 3

int b[R], cnt = 0;

void printCom() {
    for (int i = 0; i < R; i++) printf("%5d", b[i]);
    printf("\n"); cnt++;
}

void Combination(int a[], int n, int r, int ii) {
    int  i;
    if (r == R) printCom();
    else
        for (i = ii + 1; i < n; i++) {
            b[r] = a[i];
            Combination(a, n, r + 1, i);
        }
}

int main(void) {
    int a[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(a) / sizeof(int);

    Combination(a, n, 0, -1);

    printf("���� ����: %d\n", cnt);

    return 0;
}