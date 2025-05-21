#include <stdio.h>
int main() {
    int i,j,row,col,matrix1[10][10],matrix2[10][10],isequal=1;

    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);

    printf("Enter elements : ");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            if(matrix1[i][j]!=matrix2[1][j]) {
                isequal=0;
                break;
            }
        }
    }
    if(isequal) {
        printf("Equal ");
    } else {
        printf("Not equal");
    }
    return 0;
}