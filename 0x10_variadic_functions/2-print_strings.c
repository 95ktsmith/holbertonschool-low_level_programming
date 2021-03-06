#include "variadic_functions.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * Description: Prints any number of strings separated by a specified separator
 * @separator: string to print between each string
 * @n: number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		printf("%s", (s ? s : "(nil)"));

		if (separator)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
