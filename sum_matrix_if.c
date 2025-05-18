#include<stdio.h>
int main () {
int matrix1[10][10],matrix2[10][10],sum[10][10];
int i,j,row,col;

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
        sum[i][j] = matrix1[i][j]+matrix2[i][j];
    }
    
  }
  printf("Sum of matrix \n");
  for(i=0;i<row;i++) {
    for(j=0;j<col;j++) {
        printf("%d", sum[i][j]);
    }
  }
  return 0;
}