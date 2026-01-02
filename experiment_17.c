#include <stdio.h>

int main() {
    // Define the number of rows and columns
    int rows = 3;
    int cols = 4;

    // Declare a 2D array
    int matrix[rows][cols];
    int i, j;

    printf("Enter elements of the matrix (%d rows, %d columns):\n", rows, cols);

    // --- Input elements using nested loops ---
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // Prompt the user for each element
            printf("Enter element at matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDisplaying the matrix:\n");

    // --- Output elements using nested loops ---
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // Print each element followed by a space
            printf("%d ", matrix[i][j]);
        }
        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}