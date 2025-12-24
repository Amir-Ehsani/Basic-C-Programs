#include <stdio.h>

int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int inverse[10];

    for(int i=0;i<len;i++){
        inverse[i]=arr[len-i-1];
    }
    for(int i=0;i<len;i++){
        printf("%d ",inverse[i]);
    }

    return 0;
}