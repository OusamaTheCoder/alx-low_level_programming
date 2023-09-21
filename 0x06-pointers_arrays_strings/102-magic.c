#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[5];
    int *p;

    a[2] = 1024;
    p = a + 2;
    /* Add one line here */
    *(a + 2) = 98;
    printf("a[2] = %d\n", a[2]);
    return (0);
}

