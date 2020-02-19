#include "holberton.h"

/**
 * print_rev - Prints a string backwards
 * @s: Incoming string
 * Description: Prints a string in reverse order, followed by a new line
 */

void print_rev(char *s)
{
	int index, done;

	index = 0;
	done = 0;

	while (done == 0)
	{
		if (*(s + index) != '\0')
			index++;
		else
		{
			for (index -= 1; index >= 0; index--)
				_putchar (*(s + index));
			done = 1;
		}
	}
	_putchar ('\n');
}
