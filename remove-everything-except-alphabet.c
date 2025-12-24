#include <stdio.h>
#include <string.h>

int main(){
    char str[]= "This is @ $ test!";
    for(int i=0;i<=strlen(str);i++){
        if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')){
            continue;
        }else{
            int j=i;
            while(j<strlen(str)){
                str[j]
            }
        }
    }
    return 0;
}