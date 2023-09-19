#include <stdlib.h>
#include <time.h>
#include <stdio.h>  /* Include this header for printf */

/* betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    /* Print the value of n */
    printf("Random number: %d\n", n);

    return (0);
}

