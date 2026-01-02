#include <stdio.h>
#include <string.h> 
int main() {
    char source[] = "Hello";
    char destination[20]; 
    char string1[] = "Apple";
    char string2[] = "Banana";
    char combined[50]; 

    
    size_t length = strlen(source);
    printf("Length of string '%s': %zu\n\n", source, length);

    
    strcpy(destination, source);
    printf("Original source: %s\n", source);
    printf("Copied destination: %s\n\n", destination);

    
    strcpy(combined, source);
    strcat(combined, " World");
    printf("String after concatenation: %s\n\n", combined);

  
    int comparison_result_diff = strcmp(string1, string2);
    int comparison_result_same = strcmp(string1, "Apple");

    printf("Comparing '%s' and '%s': Result is %d\n", string1, string2, comparison_result_diff);
    printf("Comparing '%s' and '%s': Result is %d\n\n", string1, "Apple", comparison_result_same);

    
    

    return 0;
}