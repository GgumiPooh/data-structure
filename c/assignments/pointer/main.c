#include "stdio.h"

void swap(int* num1, int* num2) {

}

int main(void) {
    int a = 3;
    int b = 5;

    printf("Before Swapped\n");
    printf("a: %d, b: %d\n", a, b);
    
    swap(&a, &b);

    printf("After Swapped\n");
    printf("a: %d, b: %d", a, b);

    return 0;
}