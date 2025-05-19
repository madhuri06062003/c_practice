#include<stdio.h>
int main() {
    int matrix[3][3];
    int i,j;
    int determinate;

    printf("Enter elements : ");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    determinate = matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1])-matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0])+matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0]);

    if(determinate == 0) {
        printf("Determinate is 0 \n");
    } else {
        printf("Determinate : %d\n",determinate);
    }
    return 0;
}