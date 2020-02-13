#include "holberton.h"

/**
 * _isdigit - Checks if number is a digit
 * @c: the number to be checked
 * Description: Checks if number is a 0-9 digit
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
