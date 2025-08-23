#include <stdio.h>
#include "stribe.h"

int main() {
    const char *original = "Hello, World!";
    char *lowercased = (original);
    
    if (lowercased != NULL) {
        printf("Original: %s\n", original);
        printf("Lowercase: %s\n", lowercased);
    } else {
        printf("Memory allocation failed.\n");
    }

    // Free the allocated memory
    free(lowercased);
    
    return 0;
}