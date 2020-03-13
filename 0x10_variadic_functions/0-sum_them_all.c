#include "variadic_functions.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Add a list of integers
 * Description: Adds a list of integers together
 * @n: Number of integers being added
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
