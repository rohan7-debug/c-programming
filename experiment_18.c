#include <stdio.h>

int main() {
    
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int total_sum = 0;
    int rows = 3;
    int cols = 4;

    for (int i = 0; i < rows; i++) {      
        for (int j = 0; j < cols; j++) {   
            total_sum += matrix[i][j];
        }
    }

    printf("Sum of all elements in the 2D array: %d\n", total_sum);

    return 0;
}