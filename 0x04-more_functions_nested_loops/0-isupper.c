#include "holberton.h"

/**
 * _isupper - Checks if character c is uppercase
 * @c: the character to be checked
 * Description: Checks if character c is lower or upper case
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
