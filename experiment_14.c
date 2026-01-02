#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int values[size];
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &values[i]);
    }
    printf("\nDisplaying integers:\n");
    for (i = 0; i < size; ++i) {
        printf("%d\n", values[i]);
    }

    return 0;
}