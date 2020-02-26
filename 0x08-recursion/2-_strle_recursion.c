#include "holberton.h"

/**
 * _strlen_recursion - string length recursion
 * Description: Finds the length of a string using recursion
 * @s: String
 * Return: Length of the string
 */

int _strlen_recursion( char *s)
{
	int length = 0;

	if (*s != '\0')
		length++;
	else
		return (0);

	return (length + _strlen_recursion(s + length));
}
