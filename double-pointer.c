#include <stdio.h>


int main(){
    int x = 10;
    int *p = &x;
    printf("%d\n",*p);
    int **q = &p;
    printf("%d\n",**q);
    return 0;
}