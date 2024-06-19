#include "./string.h"

long long strlen(char * const str){
    long long l = 0;
    for(; str[l] != 0; l++);
    return l;

}

int strcmp(char* const str1, char* const str2){
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] < str2[i])
            return -1;
          else if (str1[i] > str2[i])
            return 1;
         i++;
    }
    return 0;
}

void strcpy(char* const source, char* destination)
{
    for (int i = 0; source[i] != '\0'; ++i) {
        destination[i] = source[i];
    }
}
    


    