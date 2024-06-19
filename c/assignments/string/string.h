#include "stdio.h"

#ifndef STRING_H
#define STRING_H

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

#endif STRING_H