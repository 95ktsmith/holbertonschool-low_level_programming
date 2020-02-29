#include "holberton.h"

/**
 * _strlen_recursion - string length recursion
 * Description: Finds the length of a string using recursion
 * @s: String
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
		length++;
	else
		return (0);

	return (length + _strlen_recursion(s + length));
}

/**
 * is_palindrome - is palindrome
 * Description: Decudes whether or not a string is a palindrome
 * @s: The string
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length < 2)
		return (1);

	if (*s == *(s + length))
	{
		*(s + length) = '\0';
		return (is_palindrome(s + 1));
	}
	else
		return (0);

}
