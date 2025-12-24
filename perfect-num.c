#include <stdio.h>

int isPerfect(int num){
    int i = num-1;
    int sum = 0;
    while(i<num && i>0){
        if(num%i==0){
            sum += i;
        }
        i--;
    }
    if(sum==num)
        return 1;
    else
        return 0;
}

int main(){
    printf("%d\n",isPerfect(8128));
    return 0;
}