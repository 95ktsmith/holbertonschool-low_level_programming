#include "holberton.h"

/**
 * string_toupper - String to Upper
 * Description: Converts any lower case letters in a string to upper case.
 * @s: String to be processed
 * Return: Pointer to string
 */

char *string_toupper(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;
	}
	return (s);
}
