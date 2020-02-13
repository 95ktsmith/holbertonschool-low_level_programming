#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: Length of the line
 * Description: Prints a diagonal line with a specified length
 */

void print_diagonal(int n)
{
	int i, spaces;

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
			_putchar (' ');
		_putchar ('\\');
		if (i != n - 1)
			_putchar ('\n');
	}
	_putchar ('\n');
}
