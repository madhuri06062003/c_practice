#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Display menu
    printf("Simple Calculator\n");
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c to consume any leftover newline

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
