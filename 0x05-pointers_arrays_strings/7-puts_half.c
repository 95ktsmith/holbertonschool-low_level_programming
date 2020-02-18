#include "holberton.h"

/**
 * puts_half - Prints half of a string
 * @str: Incoming string
 * Description: Prints the second half of a string, followed by a new line.
 * Return: Length of the string
 */

void puts_half(char *str)
{
	int length, index;

	index = 0;
	for (length = 0; *(str + length) != '\0'; length++)
		length++;

	for (index += length / 2; index < length; index++)
		_putchar (*(str + index));

	_putchar ('\n');
}
