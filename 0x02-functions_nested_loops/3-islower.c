#include "holberton.h"

/**
 * _islower - Checks if character is lowercase
 * Description: Checks if character is lower or upper case
 * Return: 1 if lower, 0 otherwise
 */

int _islower(char c)
{
	if (c > 96 && c < 124)
		return (1);
	else
		return (0);
}
