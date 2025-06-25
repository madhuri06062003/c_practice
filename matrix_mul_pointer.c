#include<stdio.h>
void mulmatrix(int *a,int *b,int r1,int c1,int c2,int *result){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++) {
            *(result+i*c2+j)=0;
            for(int k=0;k<c1;k++) {
                *(result+i*c2+j) += *(a+i*c1+k)**(b+k*c1+j);
            }
        }
    }
}
void printmatrix(int row,int col,int *matrix) {
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            printf("%d",*(matrix+i*col+j));
        }
    }
}
int main() {
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3]={{2,3,4},{5,6,7},{8,9,1}};
    int result[3][3];

    mulmatrix((int *)A,(int *)B,(int *)result,3,3,3);
    printf("Result matrix :\n");

    printmatrix((int *)result, 3,3);

    return 0;
}