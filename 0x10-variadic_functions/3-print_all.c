#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - Prints anything based on a format string.
 * @format: The format string.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char *valid_formats = "cifs";
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		if (strchr(valid_formats, format[i]))
		{
			printf("%s", separator);
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					printf("%s", str ? str : "(nil)");
					break;
			}
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

