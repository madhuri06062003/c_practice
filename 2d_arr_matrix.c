#include <stdio.h>
int main() {
    int matrix[3][3];
    int i,j;

    printf("Enter elements : ");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Enter position [%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d",matrix[i][j]);
        }
    }
    printf("\n");
    return 0;
}