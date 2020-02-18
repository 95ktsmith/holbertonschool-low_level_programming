#include "holberton.h"

/**
 * print_rev - Prints a string backwards
 * @s: Incoming string
 * Description: Prints a string in reverse order, followed by a new line
 */

void print_rev(char *s)
{
	int length;

	for (length = 0; *(s + length) != '\0'; length++)
		length++;

	for (length -= 7 ; length >= 0; length--)
	{
		_putchar (s[length]);
	}
	_putchar ('\n');
}
