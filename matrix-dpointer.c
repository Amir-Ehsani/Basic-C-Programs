#include <stdio.h>
#include <stdlib.h>

int main(){

    int row,col;
    printf("Enter row & col: \n");
    scanf("%d %d",&row,&col);

    int **arr = (int **) malloc(row*sizeof(int *));

    for(int i=0 ;i<row;i++)
        *(arr+i) = (int *) malloc(col*sizeof(int));


    for(int i =0 ; i<row;i++){
        for(int j=0;j<col;j++){
            *(*(arr+i)+j) = i+j;
        }
        printf("\n");
    }


    for(int i =0 ; i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }

    return 0;
}