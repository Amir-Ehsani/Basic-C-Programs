#include <stdio.h>

int binarySearch(int arr[],int s,int l,int r){
    if(l>r){
        return 0;
    }
    int middleObj = (r+l)/2;
    if(s==arr[middleObj]){
        return 1;
    }else if(s>arr[middleObj]){
        return binarySearch(arr,s,middleObj+1,r);
    }else{
        return binarySearch(arr,s,l,middleObj-1);
    }
    return 0;
}

int main(){
    int arr[]={1,4,5,6,7,8,12,19,26,37,96,116};
    int len=sizeof(arr)/sizeof(arr[0]);

    printf("%d\n",binarySearch(arr,16,0,len-1));

}