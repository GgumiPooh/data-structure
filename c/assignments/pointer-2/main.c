#include <stdio.h>

// + 더하기 연산
void sum(int x, int y, int *result);

// - 빼기 연산
void minus(int x, int y, int *result);

// * 곱하기 연산
void multiply(int x, int y, int *result);

// / 나누기 연산
void divide(int x, int y, int *result);

// % 나머지 연산
void mod(int x, int y, int *result);

int main(void) {
    int result;

    sum(1, 2, &result);
    printf("%d\n", result);

    minus(1, 2, &result);
    printf("%d\n", result);

    multiply(1, 2, &result);
    printf("%d\n", result);

    divide(1, 2, &result);
    printf("%d\n", result);

    mod(1, 2, &result);
    printf("%d\n", result);

    return 0;
}

void sum(int x, int y, int *result) {
    *result = x + y;
}

void minus(int x, int y, int *result) {
    *result = x - y;
}

void multiply(int x, int y, int *result) {
    *result = x * y;
}

void divide(int x, int y, int *result) {
    *result = x / y;
}

void mod(int x, int y, int *result) {
    *result = x % y;
}