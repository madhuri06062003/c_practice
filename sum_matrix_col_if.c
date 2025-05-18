#include<stdio.h>
int main() {
    int row,col,i,j,sum;
    int matrix[10][10];
    printf("Enter row :");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);

    printf("Enter elements : ");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(j=0;j<col;j++) {
        sum=0;
        for(i=0;i<row;i++) {
            sum =sum+matrix[i][j];
        }
    }
    printf("Sum of col %d\n",sum);
    return 0;
}