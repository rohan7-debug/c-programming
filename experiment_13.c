#include <stdio.h>

int main() {
    printf("--- Demonstrating break statement ---\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; 
        }
        printf("i = %d\n", i);
    }
    printf("Loop finished due to break.\n\n");
    printf("--- Demonstrating continue statement ---\n");
    for (int j = 1; j <= 10; j++) {
        if (j == 5) {
            continue; 
        }
        printf("j = %d\n", j);
    }
    printf("Loop finished with continue.\n");

    return 0;
}