#include "holberton.h"

/**
 * puts_half - Prints half of a string
 * @str: Incoming string
 * Description: Prints the first half of a string, followed by a new line.
 * Return: Length of the string
 */

void puts_half(char *str)
{
	int length, index;

	for (length = 0; *(str + length) != '\0'; length++)
		length++;

	for (index = 0; index < length / 2; index++)
		_putchar (*(str + index));

	_putchar ('\n');
}
