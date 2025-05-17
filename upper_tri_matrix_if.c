#include<stdio.h>
int main() {
    int n,i,j,sum=0;
    int matrix[10][10];

    printf("Enter number : ");
    scanf("%d",&n);
    printf("Enter elements : ");

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrix\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d\t",matrix[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i<=j) {
                sum = sum +matrix[i][j];
            }
        }
    }
    printf("Upper trinagle %d\n",sum);
    return 0;
}