#include<stdio.h>
int main() {
    int matrix[10][10];
    int i,j,row,col,sum;

    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);

    printf("Enter elements : ");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<row;i++) {
        sum =0;
        for(j=0;j<col;j++) {
            sum = sum+matrix[i][j];
        }
    }
    printf("Matrix row %d\n",sum);
    return 0;
}