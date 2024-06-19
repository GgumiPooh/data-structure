#include "stdio.h"
#include "./string.h"

int main(void) {
    char name[1000] = "Hyoeun Jin";
    int length = strlen(name);

    char sisterName[1000] = "Seeun Jin";

    printf("%d\n", length);

    if (strcmp(name, sisterName)) {
        printf("이름이 달라요\n");
    }
    else {
        printf("이름이 같아요\n");
    }

    strcpy(name, sisterName);

    if (strcmp(name, sisterName)) {
        printf("이름이 달라요\n");
    }
    else {
        printf("이름이 같아요\n");
    }

    return 0;
}
