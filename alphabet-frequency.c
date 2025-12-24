#include <stdio.h>
#include <string.h>

int main(){
    char str[]="Aaababbabbactr$*";
    int alpha[52]={0};
    int len = strlen(str);
    for(int i=0;i<=len;i++){
        if(str[i]>='A' && str[i]<='Z'){
            alpha[str[i]-'A']++;
        }else if((str[i]>='a' && str[i]<='z')){
            alpha[str[i]-'a'+26]++;
        }
    }
    for(int i=0;i<52;i++){
        if(i<26){
            printf("%c = %d\n",65+i,alpha[i]);
        }else{
            printf("%c = %d\n",97+i-26,alpha[i]);
        }
    }
    return 0;
}