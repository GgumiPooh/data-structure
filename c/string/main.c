#include "stdio.h"

// 스트링 길이를 리턴
long long strlen(char* const str);

// 첫 번째 문자열과 두 번째 문자열의 사전값 비교
// 둘 다 같으면 0을 반환
// 왼쪽 문자열이 더 크면 -1을 반환
// 오른쪽 문자열이 더 크면 +1을 반환
int strcmp(char* const str1, char* const str2); 

// 스트링 복사를 시켜주는 함수입니다.
// source 의 문자열을 destination 에 복사시켜주면 됨
void strcpy(char* const source, char* destination);

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


