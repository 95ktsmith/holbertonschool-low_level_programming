#include "holberton.h"

/**
 * _isalpha - checks if a character is alphabetical
 * @c: The character to be checked
 * Description: Checks if character is alphabetical, lower or upper case
 * Return: 1 if character is a letter, 0 otherwise
 */

int _isalpha(char c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
