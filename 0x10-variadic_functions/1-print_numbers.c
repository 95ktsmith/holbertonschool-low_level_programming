#include "variadic_functions.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * Description: Prints any number of integers, separated by a specified
 *              separator.
 * @separator: String to print between each number
 * @n: Number of integers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));

		if (separator)
		{
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
