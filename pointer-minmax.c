#include <stdio.h>

void minmax(int *min,int *max,int x,int y){
    if(x>y){
        *min = y;
        *max = x;
    }else{
        *min = x;
        *max = y;
    }
    return; 
}

int main(){
    int min,max,a=6,b=5;
    minmax(&min,&max,a,b);
    printf("min = %d and max = %d \n",min,max);
    return 0;
}