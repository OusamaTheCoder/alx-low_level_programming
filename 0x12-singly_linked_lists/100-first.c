#include <stdio.h>

/**
 * print_message - Function to print a message before main.
 */
void print_message(void) __attribute__((constructor));

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

