#include <stdio.h>

void bubbleSort(int arr[],int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;i++){

            int temp = 0 ;
            if(arr[i]>arr[i+1]){
                temp = arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }else{
                continue;
            }
        }
    }

}

int main(){
    int test[]={2,1,4,6};
    bubbleSort(test,4);
    for(int i=0;i<4;i++){
        printf("%d ",test[i]);

    }
    return 0;
}