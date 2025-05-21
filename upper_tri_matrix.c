#include<stdio.h>
int main() {
    int i,j,n;
    int matrix[10][10];

    printf("Enter number : ");
    scanf("%d",&n);
    printf("Element : ");

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(j>=i) {
                printf("%d\t",matrix[i][j]);
            } else{
                printf("\t");
            }
        }
    }
    return 0;
}