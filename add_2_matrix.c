#include <stdio.h>
int main() {
    int matrix1[3][3],matrix2[3][3],sum[3][3];
    int i,j,row,col;

    printf("Enter row:");
    scanf("%d",&row);
    printf("Enter col:");
    scanf("%d",&col);

    printf("Enter elements : ");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("Matrix 1 position : [%d][%d] \n",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("Matrix 2 position : [%d][%d] \n",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            sum[i][j]= matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("Sum\n");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("%d",sum[i][j]);
        }
    }
    printf("\n");
    return 0;

}