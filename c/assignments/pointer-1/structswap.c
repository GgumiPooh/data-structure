#include "stdio.h"

typedef struct {
    int weight;
    int height;
} Human;

void swap(Human* h1, Human* h2) {
    Human temp = *h1;;
    *h1 = *h2;
    *h2 = temp;

}

int main(void) {
    Human child = {
        20, 120
    };
    Human adult = {
        30, 333
    };

    printf("Before Swapped\n");
    printf("child\nchild's weight: %d, child's height: %d\n", child.weight, child.height);
    printf("adult\nadult's weight: %d, adult's height: %d\n", adult.weight, adult.height);

    swap(&child, &adult);

    printf("\nAtfer Swapped\n");
    printf("child\nchild's weight: %d, child's height: %d\n", child.weight, child.height);
    printf("adult\nadult's weight: %d, adult's height: %d\n", adult.weight, adult.height);

    return 0;
}