#include "holberton.h"

/**
 * _islower - Checks if character c is lowercase
 * @c: the character to be checked
 * Description: Checks if character c is lower or upper case
 * Return: 1 if lower, 0 otherwise
 */

int _islower(char c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
