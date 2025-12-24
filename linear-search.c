#include <stdio.h>

int main(){
    int arr[]={34,54,64,98,44,12,32,90,32};
    int len = sizeof(arr)/sizeof(arr[0]);
    int x = 9210;
    int isFound = 0;
    for(int i=0;i<len;i++){
        if(arr[i]==x){
            isFound = 1;
            break;
        }
    }
    if(isFound){
        printf("ok\n");
    }else{
        printf("no\n");
    }
    return 0;
}