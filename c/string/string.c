

long long strlen(char * const str){
    int l = 0;
    for(int i = 0; str[i] != 0; i++){
        l++;
    }
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

int *strcpy(char* const source, char* destination)
{
    destination = source;
    return 0;
}
    


    