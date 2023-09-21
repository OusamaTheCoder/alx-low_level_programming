#include <stdio.h>

int main(void)
{
    int a[5];

    a[2] = 1024;
    *(a + 5) = 98;
    printf("a[2] = %d\n", a[2]);
    return (0);
}

