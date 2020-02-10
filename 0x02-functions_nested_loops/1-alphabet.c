#include "holberton.h"

/**
 * print_alphabet - Prints alphabet
 * Description: Prints alphabet in lowercase, followed by new line.
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
