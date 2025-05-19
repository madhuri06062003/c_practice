#include <stdio.h>
int main() {
    int i,j,k,n;
    int matrix1[10][10],matrix2[10][10],mul[10][10];

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Enter elements : ");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("Enter matrix 1[%d][%d]:",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("Matrix 2 [%d][%d] \n",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            mul[i][j]=0;
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            for(k=0;k<n;k++) {
                mul[i][j] = mul[i][j]+matrix1[i][k]*matrix2[k][j];

            }
        }
    }
    printf("MUl \n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d",mul[i][j]);
        }
    }
    printf("\n");
    return 0;
}