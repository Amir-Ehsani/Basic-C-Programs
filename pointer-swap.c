#include <stdio.h>

void swapFunction(int *x,int *y){
    int tmp = *x;
    *x=*y;
    *y=tmp;
    return;
}

int main(){
    int a = 3 , b=5 ;
    printf("a = %d and b = %d \n",a,b);
    swapFunction(&a,&b);
    printf("a = %d and b = %d \n",a,b);
    return 0;
}