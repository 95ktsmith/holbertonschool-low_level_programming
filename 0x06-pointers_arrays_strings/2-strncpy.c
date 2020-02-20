#include "holberton.h"

/**
 * _strncpy - Copies contents of one string to another
 * Description: Copies contents of one string to another, but no more than n
 *              elements from the source string.
 * @dest: Destination string
 * @src: Source string
 * @n: Number of elements to be copied.
 * Return: Desination string pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && dest[index] != '\0' && src[index] != '\0';)
	{
		dest[index] = src[index];
		index++;
	}
	for ( ; index < n && dest[index] != '\0'; index++)
		dest[index] = '\0';

	return (dest);
}
