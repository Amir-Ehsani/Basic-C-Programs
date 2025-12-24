#include <stdio.h>
#include <math.h>

float circleArea(float r){
    return M_PI*r*r;
}

int main(){
    printf("%f",circleArea(5));
    return 0;
}