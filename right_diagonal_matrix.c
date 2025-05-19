#include<stdio.h>
int main() {
    int i,j,n;
    int matrix[10][10],sum=0;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Enter elements : ");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("Elements [%d][%d] \n",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        sum = sum + matrix[i][n-1-i];

        }
        printf("Enter right diagonal :%d\n",sum);
        return 0;
}