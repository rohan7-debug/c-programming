#include <stdio.h>

int main() {
    int N, sum = 0, i;

    printf("Enter a positive integer N: ");
    
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; 

    
    for (i = 1; i <= N; ++i) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", N, sum);

    return 0;
}