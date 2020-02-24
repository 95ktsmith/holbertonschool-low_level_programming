#include "holberton.h"

/**
 * _memset - Set Memory
 * Description: Fills the first n bytes of the memory area pointed to by
 *              s with the constant byte b.
 * @s: Start of memory area
 * @b: Constant byte
 * @n: Number of bytes to fill
 * Return: Pointer to start of memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		*(s + index) = b;
	return (s);
}
