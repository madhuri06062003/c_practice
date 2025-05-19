#include<stdio.h>
int main() {
    int i,j,rowsum,colsum;
    int matrix[10][10];
    int row,col;

    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);

    printf("Enter elements : ");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("Element [%d][%d]\n:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            rowsum=rowsum+matrix[i][j];
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            colsum=colsum+matrix[i][j];
        }
    }
    printf("\n");
    return 0;
    
}