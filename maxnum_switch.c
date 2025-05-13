#include<stdio.h>
int main() {
    int a,b,max;
    printf("Enter number : ");
    scanf("%d",&a);

    printf("Enter number :");
    scanf("%d",&b);

    max = (a>b) ? : ((a<b) ? 2:3);

    switch(max) {
        case 1: 
        printf("Max number of a : %d\n", a);
        break;
        case 2:
        printf("Max number of b : %d\n", b);
        break;
        case 3:
        printf("Max %d/n", a);
        break;
        default:
        printf("default");
    }
    return 0;
}