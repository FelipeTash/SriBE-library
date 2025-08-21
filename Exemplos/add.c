// add e concat
// main.c
#include <stdio.h>
#include <stdlib.h>
#include "StribE-library/stribe.h"

int main() {
    char *nome = add("Pedro");
    char *frase = concat(nome, " gosta de pizza");

    printf("Frase: %s\n", frase);

    free(nome);
    free(frase);

    return 0;
}
