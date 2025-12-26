#include <stdio.h>


void fibo(int n){
    long long int fibArr[n];
    fibArr[0]=1;
    fibArr[1]=1;

    for(int i=2;i<n;i++){
        fibArr[i]=fibArr[i-1]+fibArr[i-2];
    }
    for(int i=0;i<n;i++){
        printf("%d ",fibArr[i]);
    }
    printf("\n");
}

int main(){

    fibo(46);
    return 0;
}