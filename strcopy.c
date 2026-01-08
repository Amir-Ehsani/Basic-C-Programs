#include <stdio.h>

void strCopy(char *src ,char *des ){

    do{
        *des = *src;
        src++;
        des++;
    }while(*src != '\0');
    if(*src == '\0')
        *des = '\0';

}


int main(){
    char str2[20];
    char *str1 = "Hello world!";
    strCopy(str1,str2);
    printf("%s and %s\n",str1,str2);
    return 0;
}