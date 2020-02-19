#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: Incoming string
 * Description: Reverses a given string
 */

void rev_string(char *s)
{
	int index, length;
	char tmp;

	index = 0;
	length = 0;
	while (s[length] != '\0')
		length++;
	length -= 1;
	for (index = 0; index <= length / 2; index++)
	{
		tmp = s[index];
		s[index] = s[length - index];
		s[length - index] = tmp;
	}
}
