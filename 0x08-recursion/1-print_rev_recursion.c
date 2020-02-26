#include "holberton.h"

/**
 * _print_rev_recursion - print reverse recursion
 * Description: Prints a string in reverse using recursion.
 * @s: String to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar (*s);
}
