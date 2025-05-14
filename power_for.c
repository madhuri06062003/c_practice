#include <stdio.h>
int main() {
    int base,exponent;
    int result =1,i;

    printf("Enter the base : ");
    scanf("%d",&base);

    printf("Enter exponent : ");
    scanf("%d",&exponent);

    for (i=0;i<=exponent;i++) {
        result = result *base;
    }
    printf("Result %d\n : ",result);
    return 0;
}