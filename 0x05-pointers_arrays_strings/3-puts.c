#include "holberton.h"

/**
 * _puts - Prints a string
 * @str: String to be printed
 * Description: Prints a string, followed by a new line, to stdout
 */

void _puts(char *str)
{
	int index;

	for (index = 0; *(str + index) != '\0'; index++)
		_putchar (*(str + index));

	_putchar ('\n');
}
