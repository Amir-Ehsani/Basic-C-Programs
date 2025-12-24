#include <stdio.h>

int main(){
    int a[]={1,2,3,4,5,6,7};
    int len = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<len;i++){
        a[i] = a[i]%2==0? 0:a[i];
    }
    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    return 0;
}