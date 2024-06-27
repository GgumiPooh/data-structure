#include "stdio.h"
#include "stdlib.h"

void reallocateSizeOfTen(int** pp) {
    free(*pp);
    *pp  = (int*)malloc(10 * sizeof(int));    
}

int main(void) {
    int* p = (int*)malloc(4 * sizeof(int));

    reallocateSizeOfTen(&p);

    free(p);

    return 0;
}