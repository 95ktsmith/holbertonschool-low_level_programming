#include "holberton.h"

/**
 * _puts_recursion - put string with recursion
 * Description: Prints a string using recursion, rather than loops.
 * @s: String to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
