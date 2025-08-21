#include <stdio.h>
#include "stribe.h" // or #include "StriBE-library/stribe.h"

int main() {
    const char *original = "Hello, World!";
    char *lowercased = lowercase(original);
    
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
