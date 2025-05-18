#include<stdio.h>
int main () {
    int matrix[10][10];
    int i,j,n,isidentity=1;

    printf("Enter matrix : ");
    scanf("%d",&n);

    printf("Enter elements :");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i==j) {
                if(matrix[i][j]!=1) {
                    isidentity=0;
                } else {
                    if(matrix[i][j] !=0) {
                        isidentity=0;
                    }
                }
            }
        }
        if(isidentity==1) {
            printf("Matrix identity \n");
        } else {
            printf("Not a matrix identity \n");
        }
        return 0;
    }
}