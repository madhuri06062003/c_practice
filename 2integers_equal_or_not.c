#include <stdio.h>
int main() {
    int num1,num2;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("Enter number 2 : ");
    scanf("%d",&num2);

    if(num1==num2) {
        printf("The given 2 numbers are equal\n");
    } else {
        printf("Number are not equal");
    }
    return 0;
}