#include <stdio.h>

int main() {
    int n = 50;
    long long int first = 1, second = 2, next;

    printf("%lld, %lld", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf(", %lld", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}

