#include "stdio.h"
#include "stdlib.h"

void reallocateSizeOfTen(int** pp) {
    
}

int main(void) {
    int* p = (int*)malloc(4 * sizeof(int));


    free(p);

    return 0;
}