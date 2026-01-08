#include <stdio.h>

int * gen(int m){
    int *p = (int *)malloc(2000000000);
    for(int i=0;i<m;i++){
        *(p+i) = (i+1)*(i+1);
    }
    return p;
}



int main(){
    int m=5;  
    int *p = gen(m);  
    for(int i =0 ; i<m ;i++)
        printf("%d ",*(p+i));
    free(p);
    return 0;
}