#include <stdio.h>
#include <string.h>


int main(){
    char str[]="This is a test!";
    int k=0;
    char temp[20];
    for(int i=0;i<=strlen(str);i++){
        if(str[i]!=' ' && str[i]!='\0'){
            temp[k++]=str[i];
        }else{
                temp[k]='\0';
                printf("%s \n",temp);
                k=0;
        }
    }
    return 0;
}