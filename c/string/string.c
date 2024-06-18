

long long strlen(char * const str){
    int l = 0;
    for(int i = 0; str[i] != 0; i++){
        l++;
    }
    return l;

}

int strcmp(char* const str1, char* const str2){
    
    if(str1 == str2)
        return 0;
    if(str1 > str2)
        return -1;
    if(str1 < str2)
        return 1;
    
}

int *strcpy(char* const source, char* destination);

    destination = source;
    
    


    