#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int row = 3;
    int col = 4;
    int **matrix = (int **) calloc(3,sizeof(int *));
    for(int i = 0 ; i< row;i++)
        matrix[i] = (int *) calloc(4,sizeof(int));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}