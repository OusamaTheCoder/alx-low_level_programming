#include <stdio.h>

int main(void)
{
    int a[] = {0, 1, 2, 3, 4};
    int *p;

    p = a;

    printf("a[2] = %d\n", a[2]);  /* This line should not be modified */

    /* Add your code below this line */
    *(p + 2) = 98;

    return (0);
}

