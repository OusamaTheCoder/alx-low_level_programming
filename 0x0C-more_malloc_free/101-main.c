#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[]) {
    char *s1, *s2, *result;

    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    s1 = argv[1];
    s2 = argv[2];

    result = multiply(s1, s2);

    printf("%s\n", result);

    free(result);
    return 0;
}

