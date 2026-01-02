#include <stdio.h>

int main() {
    int A, B, Sum;

    printf("Enter first number: ");
    scanf("%d", &A);

    printf("Enter second number: ");
    scanf("%d", &B);

    Sum = A + B;

    printf("The sum of %d and %d is: %d\n", A, B, Sum);

    return 0;
}