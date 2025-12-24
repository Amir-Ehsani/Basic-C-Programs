#include <stdio.h>

int main(){
    for(int num=3;num<1000;num++){
        int isPrime = 1;
        for(int j=2;j*j<=num;j++){
            if(num%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
            printf("%d ",num);
        }
    }

    return 0;
}