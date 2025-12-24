#include <stdio.h>

int main(){
    int i,j,m,n;
    scanf("%d %d %d %d",&i,&j,&m,&n);
    int matrix1[i][j];
    for(int x=0;x<i;x++){
        for(int y =0;y<j;y++){
            scanf("%d",&matrix1[x][y]);
        }
        printf("\n");
    }
    int matrix2[m][n];
        for(int x=0;x<m;x++){
        for(int y =0;y<n;y++){
            scanf("%d",&matrix2[x][y]);
        }
        printf("\n");
    }
    int matrix3[i][n];
    if(j==m){
        for(int a=0;a<i;a++){
            for(int b=0;b<n;b++){
                matrix3[a][b]=0;
                for(int k=0;k<j;k++){
                    matrix3[a][b]+=matrix1[a][k]*matrix2[k][b];
                }
            }
        }
    }else{
        printf("its not possible");
        return 0;
    }

    for(int row=0;row<i;row++){
        for(int col =0;col<n;col++){
            printf("%d ",matrix3[row][col]);
        }
        printf("\n");
    }

    return 0;
}