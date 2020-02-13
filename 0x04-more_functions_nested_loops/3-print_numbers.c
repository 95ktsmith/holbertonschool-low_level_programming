#include "holberton.h"

/**
 * print_numbers - Prints digits 0-9
 * Description: Prints the digits from 0 to 9, followed by a new line
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar (i + '0');
	_putchar ('\n');
}
