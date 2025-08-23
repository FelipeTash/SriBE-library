#include <stdio.h>
#include "stribe.h" // or #include "StriBE-library/stribe.h"

int main() {
    const char *original = "Hello, World!";
    char *uppercased = uppercase(original);
    
    if (uppercased != NULL) {
        printf("Original: %s\n", original);
        printf("Uppercase: %s\n", uppercased);
    } else {
        printf("Memory allocation failed.\n");
    }
    
    return 0;

}
