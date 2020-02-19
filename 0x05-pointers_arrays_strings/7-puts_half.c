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

	for (length = 0; *(str + length) != '\0'; length++)
		length++;

	if (length % 2 != 0)
		index = 1;
	else
		index = 0;

	for (index += length / 2; index < length; index++)
	{
		if (*(str + index) != '\0')
			_putchar (*(str + index));
	}
	_putchar ('\n');
}
