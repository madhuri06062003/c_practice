#include<stdio.h>
int main() {
    int row,col,i,j;
    int matrix[10][10],transpose[10][10];

    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter col :");
    scanf("%d",&col);

    printf("Enter elements : ");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("Enter [%d][%d]\n",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            transpose[i][j]=matrix[i][j];
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("%d",matrix[i][j]);
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("%d",transpose[i][j]);
        }
    }
    printf("\n");
    return 0;

}