#include <stdio.h>
#include <math.h>


int reverse(int n){
    int i=0;
    while(n>0){
        i=i*10+(n%10);
        n/=10;
    }
    return i;
}

int isPal(int n){
    int reversed = reverse(n);
    if(n == reversed)
        return 1;
    else
        return 0;
}

int main(){
    int num = 312213;
    printf("%d",isPal(num));
    return 0;
}