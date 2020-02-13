#include "holberton.h"

/**
 * print_line - Prints a line
 * @n: Length of the line
 * Description: Prints a line with a specified number of underscores
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar ('_');

	_putchar ('\n');
}
