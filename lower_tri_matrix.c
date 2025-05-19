#include <stdio.h>
int main() {
    int i,j,matrix[10][10];
    int n;

printf("Enter number : ");
scanf("%d",&n);

printf("Enter elements : ");

for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
        printf("Elements [%d]][%d]:",i,j);
        scanf("%d",&matrix[i][j]);
    }
}
for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
        if(j<=i) {
            printf("%d\n",matrix[i][j]);
        } else {
            printf("Not\n");
        }
    }
}
printf("\n");
return 0;
}