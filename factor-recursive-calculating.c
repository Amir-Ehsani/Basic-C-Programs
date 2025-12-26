#include <stdio.h>

int factor(n){
    if(n==0||n==1){
        return 1;
    }else{
        int num = n*factor(n-1);
        return num;
    }
}

int main(){
    printf("%d",factor(5));
    return 0;
}