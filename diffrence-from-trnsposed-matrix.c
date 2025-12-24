#include <stdio.h>

int main(){
    int matrix[3][3]={{7,-20,40},{-2,3,6},{4,6,7}};
    float difference = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if((matrix[i][j]!=matrix[j][i])){
                difference++;
            }
        }
    }
    printf("%.1f \% \n" ,(difference/18)*100);
    return 0;
}