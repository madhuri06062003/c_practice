#include<stdio.h>
int main() {
    int i,j,sum=0,n;
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

        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                if(i>=j) {
                    sum =sum + matrix[i][j];
                }
            }
        }
        printf("Lower triangle = %d\n",sum);
        return 0;
    }
}