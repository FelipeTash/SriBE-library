// StriBE.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "stribe.h"

int is_equal(const char *a, const char *b) {
    return strcmp(a, b) == 0;
}

char* add(const char *src) {
    char *copy = malloc(strlen(src) + 1);
    if (copy) strcpy(copy, src);
    return copy;
}

char* concat(const char *a, const char *b) {
    size_t len = strlen(a) + strlen(b) + 1;
    char *res = malloc(len);
    if (res) {
        strcpy(res, a);
        strcat(res, b);
    }
    return res;
}

char* uppercase(const char *src) {
    size_t len = strlen(src);
    char *upper = malloc(len + 1);
    if (upper) {
        for (size_t i = 0; i < len; i++) {
            upper[i] = toupper(src[i]);
        }
        upper[len] = '\0';
    }
    return upper;
}
char* lowercase(const char *src) {
    size_t len = strlen(src);
    char *lower = malloc(len + 1);
    if (lower) {
        for (size_t i = 0; i < len; i++) {
            lower[i] = tolower(src[i]);
        }
        lower[len] = '\0';
    }
    return lower;
}
