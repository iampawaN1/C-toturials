#include<stdio.h>
int main(){
    int matrix[2][3] = {{2,4,9,1}, {0,5,2,9}};
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d\n", matrix[i][j]);
        }
    }
    return 0;
}