#include <stdio.h>

int main() {
    int size;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[100][100], sum = 0;

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the left (main) diagonal
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    // Display the result
    printf("\nSum of the left (main) diagonal: %d\n", sum);

    return 0;
}
