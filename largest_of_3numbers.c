#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter the number 1: ");
    scanf("%d", &num1);

    printf("Enter the number 2: ");
    scanf("%d", &num2);

    printf("Enter the number 3: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("Number 1 is larger\n");
    } else if (num2 > num1 && num2 > num3) {
        printf("Number 2 is larger\n");
    } else if (num3 > num1 && num3 > num2) {
        printf("Number 3 is larger\n");
    } else {
        printf("Two or more numbers are equal and largest\n");
    }

    return 0;
}
